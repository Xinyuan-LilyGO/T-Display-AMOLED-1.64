<!--
 * @Description: None
 * @version: V1.0.0
 * @Author: LILYGO_L
 * @Date: 2023-09-11 16:13:14
 * @LastEditors: LILYGO_L
 * @LastEditTime: 2024-05-28 18:07:04
 * @License: GPL 3.0
-->
<h1 align = "center">T-Display-AMOLED-1.64</h1>

## **[English](./README.md) | 中文**

## 版本迭代:
| Version                               | Update date                       |
| :-------------------------------: | :-------------------------------: |
| T-Display-AMOLED-1.64_V1.0                      | 2024-04-08                         |

## 购买链接

| Product                     | SOC           |  FLASH  |  PSRAM   | Link                   |
| :------------------------: | :-----------: |:-------: | :---------: | :------------------: |
| T-Display-AMOLED-1.64_V1.0   | ESP32S3R8 |   16M   | 8M (Octal SPI) |  [暂未售卖]()  |

## 目录
- [描述](#描述)
- [预览](#预览)
- [模块](#模块)
- [快速开始](#快速开始)
- [引脚总览](#引脚总览)
- [相关测试](#相关测试)
- [常见问题](#常见问题)
- [项目](#项目)
- [资料](#资料)
- [依赖库](#依赖库)

## 描述

T-Display-AMOLED-1.64是一款基于ESP32S3开发的板载高清AMOLED屏幕的开发板，可连接外接电池独立供电。

## 预览

### PCB板

### 渲染图


## 模块

### 1. MCU

* 芯片：ESP32-S3-R8
* PSRAM：8M (Octal SPI) 
* FLASH：16M
* 其他说明：更多资料请访问[乐鑫官方ESP32-S3数据手册](https://www.espressif.com.cn/sites/default/files/documentation/esp32-s3_datasheet_en.pdf)

### 2. 屏幕

* 尺寸：1.64英寸AMOLED屏幕
* 分辨率：280x456px
* 屏幕类型：AMOLED
* 驱动芯片：ICNA3311(CO5300)
* 兼容库：Arduino_GFX
* 总线通信协议：QSPI

### 3. 触摸

* 芯片：FT3168
* 总线通信协议：IIC

### 4. 充电芯片

* 芯片：SY6970
* 总线通信协议：IIC
* 其他：该芯片在未接电池5V供电时输出波形将非常不稳定，需要连接电池使用或者软件关闭电池通道，这样的话情况将会得到缓解

## 快速开始

### 示例支持

| Example | Support IDE And Version| Description | Picture |
| ------  | ------  | ------ | ------ | 
| [FT3168](./examples/FT3168) | `[Platformio IDE][espressif32-v6.5.0]`<br />`[Arduino IDE][esp32_v2.0.14]` |  |  |
| [Original Test](./examples/Original_Test) | `[Platformio IDE][espressif32-v6.5.0]`<br />`[Arduino IDE][esp32_v2.0.14]` | 出厂初始测试文件 |  |
| [GFX](./examples/GFX) | `[Platformio IDE][espressif32-v6.5.0]`<br />`[Arduino IDE][esp32_v2.0.14]` |  |  |
| [GFX FT3168 Image](./examples/GFX_FT3168_Image) | `[Platformio IDE][espressif32-v6.5.0]`<br />`[Arduino IDE][esp32_v2.0.14]` |  |  |
| [SY6970](./examples/SY6970) | `[Platformio IDE][espressif32-v6.5.0]`<br />`[Arduino IDE][esp32_v2.0.14]` |  |  |
| [SY6970 OTG](./examples/SY6970_OTG) | `[Platformio IDE][espressif32-v6.5.0]`<br />`[Arduino IDE][esp32_v2.0.14]` |  |  |
| [Light Sleep Wake Up](./examples/Light_Sleep_Wake_Up) | `[Platformio IDE][espressif32-v6.5.0]`<br />`[Arduino IDE][esp32_v2.0.14]` |  |  |
| [Deep Sleep Wake Up](./examples/Deep_Sleep_Wake_Up) | `[Platformio IDE][espressif32-v6.5.0]`<br />`[Arduino IDE][esp32_v2.0.14]` |  |  |


| Firmware | Description | Picture |
| ------  | ------  | ------ |
| [Original Test V1.0.0](./firmware/[T-Display-AMOLED-1.64_V1.0][Original_Test]_firmware_V1.0.0.bin) | 初始版本 |  |
| [Light Sleep V1.0.0](./firmware/[T-Display-AMOLED-1.64_V1.0][Light_Sleep_Wake_Up]_firmware_V1.0.0.bin) | 初始版本 |  |
| [Deep Sleep V1.0.0](./firmware/[T-Display-AMOLED-1.64_V1.0][Deep_Sleep_Wake_Up]_firmware_V1.0.0.bin) | 初始版本 |  |


### PlatformIO
1. 安装[VisualStudioCode](https://code.visualstudio.com/Download)，根据你的系统类型选择安装。

2. 打开VisualStudioCode软件侧边栏的“扩展”（或者使用<kbd>Ctrl</kbd>+<kbd>Shift</kbd>+<kbd>X</kbd>打开扩展），搜索“PlatformIO IDE”扩展并下载。

3. 在安装扩展的期间，你可以前往GitHub下载程序，你可以通过点击带绿色字样的“<> Code”下载主分支程序，也通过侧边栏下载“Releases”版本程序。

4. 扩展安装完成后，打开侧边栏的资源管理器（或者使用<kbd>Ctrl</kbd>+<kbd>Shift</kbd>+<kbd>E</kbd>打开），点击“打开文件夹”，找到刚刚你下载的项目代码（整个文件夹），点击“添加”，此时项目文件就添加到你的工作区了。

5. 打开项目文件中的“platformio.ini”（添加文件夹成功后PlatformIO会自动打开对应文件夹的“platformio.ini”）,在“[platformio]”目录下取消注释选择你需要烧录的示例程序（以“default_envs = xxx”为标头），然后点击左下角的“<kbd>[√](image/4.png)</kbd>”进行编译，如果编译无误，将单片机连接电脑，点击左下角“<kbd>[→](image/5.png)</kbd>”即可进行烧录。

### Arduino
1. 安装[Arduino](https://www.arduino.cc/en/software)，根据你的系统类型选择安装。

2. 打开项目文件夹的“example”目录，选择示例项目文件夹，打开以“.ino”结尾的文件即可打开Arduino IDE项目工作区。

3. 打开右上角“工具”菜单栏->选择“开发板”->“开发板管理器”，找到或者搜索“esp32”，下载作者名为“Espressif Systems”的开发板文件。接着返回“开发板”菜单栏，选择“ESP32 Arduino”开发板下的开发板类型，选择的开发板类型由“platformio.ini”文件中以[env]目录下的“board = xxx”标头为准，如果没有对应的开发板，则需要自己手动添加项目文件夹下“board”目录下的开发板。

4. 打开菜单栏“[文件](image/6.png)”->“[首选项](image/6.png)”，找到“[项目文件夹位置](image/7.png)”这一栏，将项目目录下的“libraries”文件夹里的所有库文件连带文件夹复制粘贴到这个目录下的“libraries”里边。

5. 在 "工具 "菜单中选择正确的设置，如下表所示。

#### ESP32-S3
| Setting                               | Value                                 |
| :-------------------------------: | :-------------------------------: |
| Board                                 | ESP32S3 Dev Module           |
| Upload Speed                     | 921600                               |
| USB Mode                           | Hardware CDC and JTAG     |
| USB CDC On Boot                | Enabled                              |
| USB Firmware MSC On Boot | Disabled                             |
| USB DFU On Boot                | Disabled                             |
| CPU Frequency                   | 240MHz (WiFi)                    |
| Flash Mode                         | QIO 80MHz                         |
| Flash Size                           | 16MB (128Mb)                    |
| Core Debug Level                | None                                 |
| PSRAM                                | OPI PSRAM                         |
| Arduino Runs On                  | Core 1                               |
| Events Run On                     | Core 1                               |        

6. 选择正确的端口。

7. 点击右上角“<kbd>[√](image/8.png)</kbd>”进行编译，如果编译无误，将单片机连接电脑，点击右上角“<kbd>[→](image/9.png)</kbd>”即可进行烧录。

### firmware烧录
1. 打开项目文件“tools”找到ESP32烧录工具，打开。

2. 选择正确的烧录芯片以及烧录方式点击“OK”，如图所示根据步骤1->2->3->4->5即可烧录程序，如果烧录不成功，请按住“BOOT-0”键再下载烧录。

3. 烧录文件在项目文件根目录“[firmware](./firmware/)”文件下，里面有对firmware文件版本的说明，选择合适的版本下载即可。

<p align="center" width="100%">
    <img src="image/10.png" alt="example">
    <img src="image/11.png" alt="example">
</p>


## 引脚总览

| AMOLED屏幕引脚  | ESP32S3引脚|
| :------------------: | :------------------:|
| SDIO0         | IO11       |
| SDIO1         | IO13       |
| SDIO2         | IO14       |
| SDIO3         | IO15       |
| SCLK         | IO12       |
| CS         | IO10       |
| RST         | IO17       |
| EN         | IO16       |

| 触摸芯片引脚  | ESP32S3引脚|
| :------------------: | :------------------:|
| INT         | IO9       |
| RST         | IO8       |
| SDA         | IO7       |
| SCL         | IO6       |
| SCLK         | IO12       |

| 电源芯片引脚  | ESP32S3引脚|
| :------------------: | :------------------:|
| SDA         | IO7       |
| SCL         | IO6       |

| 电池测量引脚  | ESP32S3引脚|
| :------------------: | :------------------:|
| BATTERY_VOLTAGE_ADC_DATA         | IO4       |

## 相关测试

### 功耗
| Firmware | Program| Description | Picture |
| ------  | ------  | ------ | ------ | 
| `[T-Display-AMOLED-1.64_V1.0][Light_Sleep_Wake_Up]_firmware_V1.0.0.bin` | `Light Sleep Wake Up` | 功耗: 254.5uA | <p align="center" width="10%"> <img src="image/13.jpg" alt="example"> </p> |
| `[T-Display-AMOLED-1.64_V1.0][Deep_Sleep_Wake_Up]_firmware_V1.0.0.bin` | `Deep Sleep Wake Up` | 功耗: 2259.7uA |<p align="center" width="10%"> <img src="image/12.jpg" alt="example"> </p> |

## 常见问题

* Q. 看了以上教程我还是不会搭建编程环境怎么办？
* A. 如果看了以上教程还不懂如何搭建环境的可以参考[LilyGo-Document](https://github.com/Xinyuan-LilyGO/LilyGo-Document)文档说明来搭建。

<br />

* Q. 为什么打开Arduino IDE时他会提醒我是否要升级库文件？我应该升级还是不升级？
* A. 选择不升级库文件，不同版本的库文件可能不会相互兼容所以不建议升级库文件。

<br />

* Q. 为什么我的板子上“Uart”接口没有输出串口数据，是不是坏了用不了啊？
* A. 因为项目文件默认配置将USB接口作为Uart0串口输出作为调试，“Uart”接口连接的是Uart0，不经配置自然是不会输出任何数据的。<br />PlatformIO用户请打开项目文件“platformio.ini”，将“build_flags = xxx”下的选项“-DARDUINO_USB_CDC_ON_BOOT=true”修改成“-DARDUINO_USB_CDC_ON_BOOT=false”即可正常使用外部“Uart”接口。<br />Arduino用户打开菜单“工具”栏，选择USB CDC On Boot: “Disabled”即可正常使用外部“Uart”接口。

<br />

* Q. 为什么我的板子一直烧录失败呢？
* A. 请按住“BOOT-0”按键重新下载程序。

## 项目
* [T-Display-AMOLED-1.64_V1.0](./project/T-Display-AMOLED-1.64_V1.0.pdf)

## 资料
* [CO5300](./information/CO5300_V0.01.pdf)
* [FT3168](./information/FT3168.pdf)
* [DO0164FMST02](./information/SPEC-DO0164FMST02-20240126.pdf)
* [AN_SY6970](./information/AN_SY6970.pdf)
* [EVB_SY6970](./information/EVB_SY6970.pdf)

## 依赖库
* [Arduino_GFX-1.3.7](https://github.com/moononournation/Arduino_GFX)
* [Arduino_DriveBus-1.1.8](https://github.com/Xk-w/Arduino_DriveBus)