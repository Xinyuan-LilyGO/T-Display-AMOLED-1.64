<!--
 * @Description: None
 * @version: V1.0.0
 * @Author: LILYGO_L
 * @Date: 2023-09-11 16:13:14
 * @LastEditors: LILYGO_L
 * @LastEditTime: 2024-05-28 18:17:59
 * @License: GPL 3.0
-->
<h1 align = "center">T-Display-AMOLED-1.64</h1>

## **English | [中文](./README_CN.md)**

## Version iteration:
| Version                              | Update date                       |
| :-------------------------------: | :-------------------------------: |
| T-Display-AMOLED-1.64_V1.0                      | 2024-04-08                         |

## PurchaseLink

| Product                     | SOC           |  FLASH  |  PSRAM   | Link                   |
| :------------------------: | :-----------: |:-------: | :---------: | :------------------: |
| T-Display-AMOLED-1.64_V1.0   | ESP32S3R8 |   16M   | 8M (Octal SPI) |   [Not yet sold]()  |

## Directory
- [Describe](#describe)
- [Preview](#preview)
- [Module](#module)
- [QuickStart](#quickstart)
- [PinOverview](#pinoverview)
- [RelatedTests](#RelatedTests)
- [FAQ](#faq)
- [Project](#project)
- [Information](#information)
- [DependentLibraries](#dependentlibraries)

## Describe

The T-Display-AMOLED-1.64 is a development board featuring a high-definition AMOLED screen onboard, developed based on the ESP32S3. It is capable of connecting to an external battery for independent power supply.

## Preview

### PCB board

### Rendering

## Module

### 1.MCU

* Chip: ESP32-S3-R8
* PSRAM: 8M (Octal SPI) 
* FLASH: 16M
* For more details, please visit[Espressif ESP32-S3 Datashee](https://www.espressif.com.cn/sites/default/files/documentation/esp32-s3_datasheet_en.pdf)

### 2. Screen

* Size: 1.64-inch AMOLED screen
* Resolution: 280x456px
* Screen type: AMOLED
* Driver chip: ICNA3311(CO5300)
* Compatibility library: Arduino_GFX
* Bus communication protocol: QSPI

### 3. Touch

* Chip: FT3168
* Bus communication protocol: IIC

### 4. Charging chip

* Chip: SY6970
* Bus communication protocol: IIC
* Other: The output waveform of the chip will be highly unstable when powered by a 5V supply without a battery connected. To stabilize the situation, it is necessary to either connect a battery or use software to disable the battery channel. By doing so, the instability will be alleviated.

## QuickStart

### Examples Support

| Example | Support IDE And Version| Description | Picture |
| ------  | ------  | ------ | ------ | 
| [FT3168](./examples/FT3168) | `[Platformio IDE][espressif32-v6.5.0]`<br />`[Arduino IDE][esp32_v2.0.14]` |  |  |
| [Original Test](./examples/Original_Test) | `[Platformio IDE][espressif32-v6.5.0]`<br />`[Arduino IDE][esp32_v2.0.14]` | Product factory original testing |  |
| [GFX](./examples/GFX) | `[Platformio IDE][espressif32-v6.5.0]`<br />`[Arduino IDE][esp32_v2.0.14]` |  |  |
| [GFX FT3168 Image](./examples/GFX_FT3168_Image) | `[Platformio IDE][espressif32-v6.5.0]`<br />`[Arduino IDE][esp32_v2.0.14]` |  |  |
| [SY6970](./examples/SY6970) | `[Platformio IDE][espressif32-v6.5.0]`<br />`[Arduino IDE][esp32_v2.0.14]` |  |  |
| [SY6970 OTG](./examples/SY6970_OTG) | `[Platformio IDE][espressif32-v6.5.0]`<br />`[Arduino IDE][esp32_v2.0.14]` |  |  |
| [Light Sleep Wake Up](./examples/Light_Sleep_Wake_Up) | `[Platformio IDE][espressif32-v6.5.0]`<br />`[Arduino IDE][esp32_v2.0.14]` |  |  |
| [Deep Sleep Wake Up](./examples/Deep_Sleep_Wake_Up) | `[Platformio IDE][espressif32-v6.5.0]`<br />`[Arduino IDE][esp32_v2.0.14]` |  |  |

| Firmware | Description | Picture |
| ------  | ------  | ------ |
| [Original Test V1.0.0](./firmware/[T-Display-AMOLED-1.64_V1.0][Original_Test]_firmware_V1.0.0.bin) | Original |  |
| [Light Sleep V1.0.0](./firmware/[T-Display-AMOLED-1.64_V1.0][Light_Sleep_Wake_Up]_firmware_V1.0.0.bin) | Original |  |
| [Deep Sleep V1.0.0](./firmware/[T-Display-AMOLED-1.64_V1.0][Deep_Sleep_Wake_Up]_firmware_V1.0.0.bin) | Original |  |

### PlatformIO
1. Install[VisualStudioCode](https://code.visualstudio.com/Download),Choose installation based on your system type.

2. Open the "Extension" section of the Visual Studio Code software sidebar(Alternatively, use "<kbd>Ctrl</kbd>+<kbd>Shift</kbd>+<kbd>X</kbd>" to open the extension),Search for the "PlatformIO IDE" extension and download it.

3. During the installation of the extension, you can go to GitHub to download the program. You can download the main branch by clicking on the "<> Code" with green text, or you can download the program versions from the "Releases" section in the sidebar.

4. After the installation of the extension is completed, open the Explorer in the sidebar(Alternatively, use "<kbd>Ctrl</kbd>+<kbd>Shift</kbd>+<kbd>E</kbd>" go open it),Click on "Open Folder," locate the project code you just downloaded (the entire folder), and click "Add." At this point, the project files will be added to your workspace.

5. Open the "platformio.ini" file in the project folder (PlatformIO will automatically open the "platformio.ini" file corresponding to the added folder). Under the "[platformio]" section, uncomment and select the example program you want to burn (it should start with "default_envs = xxx") Then click "<kbd>[√](image/4.png)</kbd>" in the bottom left corner to compile,If the compilation is correct, connect the microcontroller to the computer and click "<kbd>[→](image/5.png)</kbd>" in the bottom left corner to download the program.

### Arduino
1. Install[Arduino](https://www.arduino.cc/en/software),Choose installation based on your system type.

2. Open the "example" directory within the project folder, select the example project folder, and open the file ending with ".ino" to open the Arduino IDE project workspace.

3. Open the "Tools" menu at the top right -> Select "Board" -> "Board Manager." Find or search for "esp32" and download the board files from the author named "Espressif Systems." Then, go back to the "Board" menu and select the development board type under "ESP32 Arduino." The selected development board type should match the one specified in the "platformio.ini" file under the [env] section with the header "board = xxx." If there is no corresponding development board, you may need to manually add the development board from the "board" directory within your project folder.

4. Open menu bar "[File](image/6.png)" -> "[Preferences](image/6.png)" ,Find "[Sketchbook location](image/7.png)"  here,copy and paste all library files and folders from the "libraries" folder in the project directory into the "libraries" folder in this directory.

5. Select the correct settings in the Tools menu, as shown in the table below.

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

6. Select the correct port.

7. Click "<kbd>[√](image/8.png)</kbd>" in the upper right corner to compile,If the compilation is correct, connect the microcontroller to the computer,Click "<kbd>[→](image/9.png)</kbd>" in the upper right corner to download.

### firmware download
1. Open the project file "tools" and locate the ESP32 burning tool. Open it.

2. Select the correct burning chip and burning method, then click "OK." As shown in the picture, follow steps 1->2->3->4->5 to burn the program. If the burning is not successful, press and hold the "BOOT-0" button and then download and burn again.

3. Burn the file in the root directory of the project file "[firmware](./firmware/)" file,There is a description of the firmware file version inside, just choose the appropriate version to download.

<p align="center" width="100%">
    <img src="image/10.png" alt="example">
    <img src="image/11.png" alt="example">
</p>


## PinOverview

| AMOLED Screen Pin  | ESP32S3 Pin|
| :------------------: | :------------------:|
| SDIO0         | IO11       |
| SDIO1         | IO13       |
| SDIO2         | IO14       |
| SDIO3         | IO15       |
| SCLK         | IO12       |
| CS         | IO10       |
| RST         | IO17       |
| EN         | IO16       |

| Touch Chip Pin  | ESP32S3 Pin|
| :------------------: | :------------------:|
| INT         | IO9       |
| RST         | IO8       |
| SDA         | IO7       |
| SCL         | IO6       |
| SCLK         | IO12       |

| Power Chip Pin  | ESP32S3 Pin|
| :------------------: | :------------------:|
| SDA         | IO7       |
| SCL         | IO6       |

|  Battery Voltage Measurement Pin | ESP32S3 Pin|
| :------------------: | :------------------:|
| BATTERY_ADC_DATA              | IO4     |

## RelatedTests

### Power Dissipation
| Firmware | Program| Description | Picture |
| ------  | ------  | ------ | ------ | 
| `[T-Display-AMOLED-1.64_V1.0][Light_Sleep_Wake_Up]_firmware_V1.0.0.bin` | `Light Sleep Wake Up` | Power dissipation: 2259.7uA | <p align="center" width="10%"> <img src="image/13.jpg" alt="example"> </p> |
| `[T-Display-AMOLED-1.64_V1.0][Deep_Sleep_Wake_Up]_firmware_V1.0.0.bin` | `Deep Sleep Wake Up` | Power dissipation: 254.5uA |<p align="center" width="10%"> <img src="image/12.jpg" alt="example"> </p> |

## FAQ

* Q. After reading the above tutorials, I still don't know how to build a programming environment. What should I do?
* A. If you still don't understand how to build an environment after reading the above tutorials, you can refer to the [LilyGo-Document](https://github.com/Xinyuan-LilyGO/LilyGo-Document) document instructions to build it.

<br />

* Q. Why does Arduino IDE prompt me to update library files when I open it? Should I update them or not?
* A. Choose not to update library files. Different versions of library files may not be mutually compatible, so it is not recommended to update library files.

<br />

* Q. Why is there no serial data output on the "Uart" interface on my board? Is it defective and unusable?
* A. The default project configuration uses the USB interface as Uart0 serial output for debugging purposes. The "Uart" interface is connected to Uart0, so it won't output any data without configuration.<br />For PlatformIO users, please open the project file "platformio.ini" and modify the option under "build_flags = xxx" from "-D ARDUINO_USB_CDC_ON_BOOT=true" to "-D ARDUINO_USB_CDC_ON_BOOT=false" to enable external "Uart" interface.<br />For Arduino users, open the "Tools" menu and select "USB CDC On Boot: Disabled" to enable the external "Uart" interface.

<br />

* Q. Why is my board continuously failing to download the program?
* A. Please hold down the "BOOT-0" button and try downloading the program again.

## Project
* [T-Display-AMOLED-1.64_V1.0](./project/T-Display-AMOLED-1.64_V1.0.pdf)

## Information
* [CO5300](./information/CO5300_V0.01.pdf)
* [FT3168](./information/FT3168.pdf)
* [DO0164FMST02](./information/SPEC-DO0164FMST02-20240126.pdf)
* [AN_SY6970](./information/AN_SY6970.pdf)
* [EVB_SY6970](./information/EVB_SY6970.pdf)

## DependentLibraries
* [Arduino_GFX-1.3.7](https://github.com/moononournation/Arduino_GFX)
* [Arduino_DriveBus-1.1.8](https://github.com/Xk-w/Arduino_DriveBus)

