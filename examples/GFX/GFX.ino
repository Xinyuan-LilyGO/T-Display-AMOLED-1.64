/*
 * @Description: GFX显示测试
 * @version: V1.0.0
 * @Author: LILYGO_L
 * @Date: 2023-09-06 10:58:19
 * @LastEditors: LILYGO_L
 * @LastEditTime: 2024-05-28 14:16:01
 * @License: GPL 3.0
 */
#include <Arduino.h>
#include "Arduino_GFX_Library.h"
#include "pin_config.h"

Arduino_DataBus *bus = new Arduino_ESP32QSPI(
    LCD_CS /* CS */, LCD_SCLK /* SCK */, LCD_SDIO0 /* SDIO0 */, LCD_SDIO1 /* SDIO1 */,
    LCD_SDIO2 /* SDIO2 */, LCD_SDIO3 /* SDIO3 */);

Arduino_GFX *gfx = new Arduino_CO5300(bus, LCD_RST /* RST */,
                                      0 /* rotation */, false /* IPS */, LCD_WIDTH, LCD_HEIGHT,
                                      20 /* col offset 1 */, 0 /* row offset 1 */, 0 /* col_offset2 */, 0 /* row_offset2 */);

void setup()
{
    Serial.begin(115200);
    Serial.println("Ciallo");

    pinMode(LCD_EN, OUTPUT);
    digitalWrite(LCD_EN, HIGH);

    gfx->begin();
    gfx->fillScreen(PINK);

    for (int i = 0; i <= 255; i++)
    {
        gfx->Display_Brightness(i);
        delay(3);
    }

    // for (int i = 0; i < 4; i++)
    // {
    //     gfx->SetContrast(i);
    //     delay(2000);
    // }

    // gfx->SetContrast(0);

    // gfx->fillScreen(RED);
    // delay(1000);
    // gfx->fillScreen(GREEN);
    // delay(1000);
    // gfx->fillScreen(BLUE);
    // delay(1000);

    gfx->drawRect(40, 40, 80, 80, RED);
    gfx->drawFastVLine(80, 40, 80, PURPLE);
    gfx->drawFastHLine(40, 80, 80, PURPLE);

    gfx->drawPixel(50, 50, RED);

    // gfx->fillRect(30, 30, 2, 2, RED);

    gfx->setCursor(100, 100);
    gfx->setTextColor(YELLOW);
    gfx->println("Ciallo1~(L *##*L)^**");

    gfx->drawRect(0, 0, LCD_WIDTH-1, LCD_HEIGHT-1, RED);
}

void loop()
{
    // gfx->fillScreen(PINK);
    // delay(1000);
}
