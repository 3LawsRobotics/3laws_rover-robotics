# 3laws_rover-robotics

## Getting started

### Robot diagnostic module install:
```bash
bash <(curl -fsSL https://raw.githubusercontent.com/3LawsRobotics/3laws-public/master/rdm/install.sh) rover-robotics
```

### Robot diagnostic module update:
```bash
bash <(curl -fsSL https://raw.githubusercontent.com/3LawsRobotics/3laws-public/master/rdm/update.sh) <PACKAGE|DOCKER> rover-robotics
```

### Robot diagnostic module uninstall:
```bash
bash <(curl -fsSL https://raw.githubusercontent.com/3LawsRobotics/3laws-public/master/rdm/uninstall.sh)
```
## Configuring the diagnostic module
The base configuration file for the diagnostic module can be found at `$HOME/3lawsRoboticsInc/3laws_rover-robotics/config/rdm_config.yaml`.

Feel free to modify that file, but don't forget to **commit and push your changes** so that when we release a new version of the diagnostic module, we also update your config file.

You can specify the name of this config file with the launch arguments `config_filename:="my_awesome_config_name.yaml"`.

If you want to keep your config file offline, you can also put it in `$HOME/3lawsRoboticsInc/config` or `/opt/3lawsRoboticsInc/config`.

If you really don't like these paths or names, you can override the default launch arguments value with `config_search_directories:="['/my/secret/path1','/my/secret/path2']"`.

Finally, the diagnostic module relies on specifying a unique robot identifier for you to distinguish between robots in your dashboard. There are 3 ways to specify this robot identifier, in order of priority:
1. As a launch argument to `rdm.launch.py`: `robot_id:=<ROBOT_ID>`
2. As a field in the config file : `robot_id: <ROBOT_ID>`
3. As an environment variable: `LAWS3_ROBOT_ID=<ROBOT_ID>`

If none of these are specified, the hardware identifier is used instead. The hardware identifier is determined as follow, in order of priority:
1. Value of the `hardware_id` field at the root of the config file
2. Content of `/3laws_robotics/machine-id` file
3. Content of `/etc/machine-id` file
4. Hashed content of `/etc/fstab` file
5. `rover-robotics_robot`

## Running the diagnostic module

### Package
If during the installation process you have chosen the `package` mode, you can just run:
```bash
$HOME/3lawsRoboticsInc/3laws_rover-robotics/packages/start_rdm.sh
```
You can provide launch arguments to the start script as if calling ros2 launch:
```bash
$HOME/3lawsRoboticsInc/3laws_rover-robotics/packages/start_rdm.sh log_level:=<trace|debug|info|warn|err|critical|off> robot_id:=<ROBOT_ID> config_filename:=<CONFIG_FILENAME> config_search_directories:="['<CONFIG_PATH_1>','<CONFIG_PATH_2>']"

If you want to start the diagnostic module as part of your launch system, add the following line to your .bashrc:
```bash
source $PWD/$PACKAGE_DIR/packages/ROS2/local_setup.bash"
```
Source your bashrc : `source ~/.bashrc`, and add the following action to the LaunchDescription in your launch file:
```
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution

IncludeLaunchDescription(
    PythonLaunchDescriptionSource(
        PathJoinSubstitution(
            [
                get_package_share_directory('lll_rdm'),
                'launch',
                'rdm.launch.py',
            ]
        )
    ),
    launch_arguments={
        'log_level': '<trace|debug|info|warn|err|critical|off>',
        'robot_id': '<ROBOT_ID>'
        'config_filename': '<CONFIG_FILENAME>'
        'config_search_directories': "['<CONFIG_PATH_1>','<CONFIG_PATH_2>']"
    }.items(),
)

```

### Docker
The following docker image with the diagnostic module already isntalled is available for you at `ghcr.io/3lawsrobotics/3laws_rdm_rover-robotics:latest`.
This image is updated everytime we release a new version of the software and includes any change you made to your config file and pushed to the repo.

You can run it with:
```bash
docker run -it --rm --name 3laws_rdm -u $(id -u):$(id -g) -e LAWS3_ROBOT_ID=<ROBOT_ID> --net=host --pid=host -v /dev/shm:/dev/shm -v /etc/machine-id:/3laws_robotics/machine-id ghcr.io/3lawsrobotics/3laws_rdm_rover-robotics:latest
```
or in detached mode with:
```bash
docker run -d --rm --name 3laws_rdm -u $(id -u):$(id -g) -e LAWS3_ROBOT_ID=<ROBOT_ID> --net=host --pid=host -v /dev/shm:/dev/shm -v /etc/machine-id:/3laws_robotics/machine-id ghcr.io/3lawsrobotics/3laws_rdm_rover-robotics:latest
```

If you want to use a different config file than the one present in the docker image, you can either rebuild a local docker image yourself (see [Building a the docker container](#Building-a-the-docker-container) section), or bind a folder containing a new config file by adding `-v /my/config/folder:/root/3lawsRoboticsInc/config` to the list of option of `docker run ...`.

You can also add the same launch argument as in package mode at the very end of the `docker run` command. If you add the `bash` argument, this will be open a bash prompt in the docker file for you.


## Building the docker container
To rebuild the docker container, navigate the directory containing this Readme, and run:
```bash
docker build --build-arg BASE_ARCH=<amd64|arm64v8> --rm -f Dockerfile -t <DOCKER_IMAGE_NAME> .
```
