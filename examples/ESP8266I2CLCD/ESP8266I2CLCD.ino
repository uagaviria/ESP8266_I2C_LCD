  // ESP8266 with 16x2 i2c LCD
  // Compatible with the Arduino IDE 1.6.6
  // Library https://github.com/agnunez/ESP8266-I2C-LCD1602
  // Original Library https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library
  // Modified for ESP8266 with GPIO0-SDA GPIO2-SCL and LCD1206 display
  // edit library and change Wire.begin() by Wire.begin(sda,scl) or other GPIO's used for I2C
  // and access from lcd.begin(sda,scl)
  
#include <LiquidCrystal_I2C.h>
#include <Wire.h> 
  
  LiquidCrystal_I2C lcd(0x3F,16,2); // Check I2C address of LCD, normally 0x27 or 0x3F
  

uint8_t bell[8] = {0x4,0xe,0xe,0xe,0x1f,0x0,0x4};
uint8_t note[8] = {0x2,0x3,0x2,0xe,0x1e,0xc,0x0};
uint8_t clock[8] = {0x0,0xe,0x15,0x17,0x11,0xe,0x0};
uint8_t heart[8] = {0x0,0xa,0x1f,0x1f,0xe,0x4,0x0};
uint8_t duck[8] = {0x0,0xc,0x1d,0xf,0xf,0x6,0x0};
uint8_t check[8] = {0x0,0x1,0x3,0x16,0x1c,0x8,0x0};
uint8_t cross[8] = {0x0,0x1b,0xe,0x4,0xe,0x1b,0x0};
uint8_t retarrow[8] = { 0x1,0x1,0x5,0x9,0x1f,0x8,0x4};
  
  void setup()  {
    lcd.begin(0,2);      // In ESP8266-01, SDA=0, SCL=2               
    lcd.backlight();
    lcd.createChar(1, retarrow);
  }
  
  void loop()  {
    lcd.home();                // At column=0, row=0
    lcd.print("ESP8266");   
    lcd.setCursor(0, 1);
    lcd.print("LiquidCrystalI2C");
    delay(500);
    lcd.setCursor(10, 0);      // At column=10, row=0
    lcd.write(byte(1));
    delay(500);
    lcd.setCursor(10, 0);      // At column=10, row=0
    lcd.print(" ");            // Wipe sprite
  }
