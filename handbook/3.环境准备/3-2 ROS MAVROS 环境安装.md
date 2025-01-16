# ROS MAVROS 环境安装

::: tip

已购买无人机的用户此步可以跳过，无人机搭载的环境已全部配置妥当

:::

## 环境介绍

Ubuntu 20.04

ROS Noetic

## ROS 安装

设置清华ros软件源

```
sudo sh -c '. /etc/lsb-release && echo "deb http://mirrors.tuna.tsinghua.edu.cn/ros/ubuntu/ `lsb_release -cs` main" > /etc/apt/sources.list.d/ros-latest.list'
```

> 官方源如下
>
> ```
> sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
> ```

先安装curl

```
sudo apt install curl
```

设置密钥

```
curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -
```

更新软件源

```
sudo apt update
```

安装 ros 完整版

```
sudo apt install ros-noetic-desktop-full
```

设置环境变量

```
echo "source /opt/ros/noetic/setup.bash" >> ~/.bashrc
source ~/.bashrc
```

构建包的依赖关系前先安装依赖

```
sudo apt install python3-rosdep python3-rosinstall python3-rosinstall-generator python3-wstool build-essential
```

初始化 rosdep

```
sudo rosdep init
rosdep update
```

## MAVROS安装

安装 mavros 包

```
sudo apt install ros-noetic-mavros ros-noetic-mavros-extras
```

安装其他依赖，对网络环境要求较高，多次执行直到全部succeed

```
sudo /opt/ros/noetic/lib/mavros/install_geographiclib_datasets.sh
```

