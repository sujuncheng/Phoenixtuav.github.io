# MAVROS安装

::: tip

已购买无人机的用户此步可以跳过，无人机搭载的环境已全部配置妥当

:::

## 环境介绍

Ubuntu 20.04

ROS Noetic

MAVROS

## MAVROS安装

安装 mavros 包

```
sudo apt install ros-noetic-mavros ros-noetic-mavros-extras
```

安装其他依赖，对网络环境要求较高，多次执行直到全部succeed

```
sudo /opt/ros/noetic/lib/mavros/install_geographiclib_datasets.sh
```

::: tip Tip:若一直下载失败可以考虑这个方法

[点击下载GeographicLib.zip](./assets/GeographicLib.zip)

解压压缩包

```
unzip GeographicLib.zip
```

先清理目标文件夹

```
sudo rm -rf /usr/share/GeographicLib
```

将文件夹移动到`/usr/share/`下

```
sudo mv GeographicLib /usr/share/
```

:::
