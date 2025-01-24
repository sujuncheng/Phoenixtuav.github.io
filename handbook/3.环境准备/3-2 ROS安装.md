# ROS安装

::: tip

已购买无人机的用户此步可以跳过，无人机搭载的环境已全部配置妥当

:::

## 环境介绍

Ubuntu 20.04

ROS Noetic

## ROS 安装

#### 使用[鱼香肉丝](https://fishros.org.cn/forum/topic/20/%E5%B0%8F%E9%B1%BC%E7%9A%84%E4%B8%80%E9%94%AE%E5%AE%89%E8%A3%85%E7%B3%BB%E5%88%97)进行安装（推荐）

一行代码-解决人生烦恼

```
wget http://fishros.com/install -O fishros && . fishros
```

输入1，安装ros

输入1，更换系统源

输入1，仅更换系统源

输入3，安装ROS Noetic

> （不一定是3，注意选项ROS Noetic即可）

输入1，安装桌面版

ROS包含构建包的依赖，也就是下面这个安装命令，否则后面安装PX4环境会出现问题。

```
sudo apt install python3-rosdep python3-rosinstall python3-rosinstall-generator python3-wstool build-essential
```

#### 根据[ros官网](https://wiki.ros.org/cn/noetic/Installation/Ubuntu)指令进行安装

::: details 点击展开

设置清华ros软件源

```
sudo sh -c '. /etc/lsb-release && echo "deb http://mirrors.tuna.tsinghua.edu.cn/ros/ubuntu/ `lsb_release -cs` main" > /etc/apt/sources.list.d/ros-latest.list'
```

> 若要官方源则指令如下
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

:::
