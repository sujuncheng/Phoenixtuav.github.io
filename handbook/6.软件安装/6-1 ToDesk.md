# ToDesk

ToDesk官网：https://www.todesk.com/

:::: tabs

::: tab Ubuntu

```sh
sudo snap install todesk
```

:::

::: tab Arch Linux

## 安装

danger

请勿根据`ToDesk`官网的安装教程进行安装，否则一定会遇到版本过低无法使用的错误！

打开浏览器，访问 https://aur.archlinux.org/

在右上角`Package Search`输入框输入`todesk`，回车进行搜索

![](./assets/Snipaste_2025-01-21_11-17-02.png)

在搜索结果列表中，找到`todesk-bin`，单击进入

![](./assets/Snipaste_2025-01-21_11-21-08.png)

找到`Git Clone URL`，单击复制

![](./assets/Snipaste_2025-01-21_11-24-03.png)

打开`Konsole`，导航到目标下载路径

```sh
cd ~/Sotfware/
```

![](./assets/Snipaste_2025-01-21_11-28-26.png)

执行以下指令，下载`todesk`源码

```sh
git clone https://aur.archlinux.org/todesk-bin.git
```

![](./assets/Snipaste_2025-01-21_11-29-23.png)

导航到`todesk-bin`文件夹

```sh
cd todesk-bin/
```

![](./assets/Snipaste_2025-01-21_11-30-22.png)

执行以下指令，编译并安装`todesk-bin`

```sh
makepkg -si
```

## 启动

![](./assets/Snipaste_2025-01-21_11-32-50.png)

在桌面左下角找到`Application Launcher`，在列表中找到`ToDesk`，单击图标启动

![](./assets/Snipaste_2025-01-21_11-36-11.png)

![](./assets/Snipaste_2025-01-21_11-44-51.png)

tip

如果在登陆账户时，不能正常连接网络，请执行以下命令初始化

```sh
sudo systemctl stop todeskd.service
sudo mv /opt/todesk/config/todeskd.conf /opt/todesk/config/todeskd.conf.bak
sudo systemctl start todeskd.service
```

![](./assets/Snipaste_2025-01-21_11-44-00.png)

## 卸载

```sh
sudo pacman -Rns todesk-bin
```

::::