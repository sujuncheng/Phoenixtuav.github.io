# ToDesk

ToDesk官网：https://www.todesk.com/

## 下载

:::: tabs

::: tab Ubuntu

打开浏览器，访问 https://www.todesk.com/linux.html

在左侧系统列表中，找到`Debian/Ubuntu/Mint (x64)`，单击进入

![](./assets/Snipaste_2025-01-21_13-09-26.png)

单击`立即下载`，将`.deb`文件保存到`~/Software/`文件夹下

![](./assets/Snipaste_2025-01-21_13-23-58.png)

为快速上手，上述步骤也可以简化为

打开`Terminal`，导航到目标下载路径`~/Sotfware/`

```sh
cd ~/Softfware/
```

执行以下指令，下载`todesk` 安装包

```sh
wget https://dl.todesk.com/linux/todesk-v4.7.2.0-amd64.deb
```

![](./assets/Snipaste_2025-01-21_13-30-02.png)

:::

::: tab Arch Linux

**请勿根据`ToDesk`官网的安装教程进行安装，否则一定会遇到版本过低无法使用的错误！**

打开浏览器，访问 https://aur.archlinux.org/

在右上角`Package Search`输入框输入`todesk`，回车进行搜索

![](./assets/Snipaste_2025-01-21_11-17-02.png)

在搜索结果列表中，找到`todesk-bin`，单击进入

![](./assets/Snipaste_2025-01-21_11-21-08.png)

找到`Git Clone URL`，单击复制

![](./assets/Snipaste_2025-01-21_11-24-03.png)

**为快速上手，上述步骤也可以直接跳过**

打开`Konsole`，导航到目标下载路径`~/Sotfware/`

```sh
cd ~/Sotfware/
```

执行以下指令，下载`todesk`源码

```sh
git clone https://aur.archlinux.org/todesk-bin.git
```

![](./assets/Snipaste_2025-01-21_11-29-23.png)

:::

::::

## 安装

:::: tabs

::: tab Ubuntu

```sh
sudo apt install ./todesk-v4.7.2.0-amd64.deb
```

:::

::: tab Arch Linux

导航到`todesk-bin`文件夹

```sh
cd todesk-bin/
```

执行以下指令，编译并安装`todesk-bin`

```sh
makepkg -si
```

:::

::::

## 启动

![](./assets/Snipaste_2025-01-21_11-32-50.png)

在桌面左下角找到`Application Launcher`，在列表中找到`ToDesk`，单击图标启动

![](./assets/Snipaste_2025-01-21_11-36-11.png)

![](./assets/Snipaste_2025-01-21_11-44-51.png)

::: tip

如果在登陆账户时，不能正常连接网络，请执行以下命令初始化

```sh
sudo systemctl stop todeskd.service
sudo mv /opt/todesk/config/todeskd.conf /opt/todesk/config/todeskd.conf.bak
sudo systemctl start todeskd.service
```

![](./assets/Snipaste_2025-01-21_11-44-00.png)

:::

## 卸载

:::: tabs

::: tab Ubuntu

```sh
sudo apt remove --purge todesk
```

:::

::: tab Arch Linux

```sh
sudo pacman -Rns todesk-bin
```

:::

::::
