# ESP8266-I2C-LCD1602
ESP-8266 LCD1602 Lyquid Crystal Display biblioteca alternativa peque�a utilizando el bus I2C como conexi�n

ESP8266 con 20x4 i2c 1602 LCD adaptable a otros, probado con ESP-8266 MOD
Compatible con el Arduino IDE 1.6.6

Modificado para ESP8266 con adaptacion de la pantalla I2C. los pines del esp son: GPIO0-SDA GPIO2-SCL. Permitir la configuraci�n a trav�s de lcd.begin (sda, scl) u otros GPIO utilizados para I2C

# Instalaci�n #
Cree una nueva carpeta llamada "LiquidCrystal_I2C" en la carpeta denominada "libraries" en su carpeta de sketchbook de Arduino.
Cree la carpeta "libraries" en caso de que no exista todav�a. Coloque todos los archivos en la carpeta "LiquidCrystal_I2C".

# Uso #
Para usar la biblioteca en su propio boceto, selecci�nela desde * Sketch> Import Library *.
