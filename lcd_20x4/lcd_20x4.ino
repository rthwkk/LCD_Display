#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define SDA_PIN D2 // GPIO4 (D2)
#define SCL_PIN D1 // GPIO5 (D1)

LiquidCrystal_I2C lcd(0x27, 20, 4); // Set I2C address (0x27 or 0x3F)

void setup() {
    Wire.begin(SDA_PIN, SCL_PIN); // Initialize I2C with custom pins
    lcd.init();                   // Initialize LCD
    lcd.backlight(); 
    lcd.setCursor(5, 0);           // Turn on backlight
    lcd.print("Rithwik D");
    lcd.setCursor(5, 1);           // Turn on backlight
    lcd.print("B230524EE");
    lcd.setCursor(5, 2);           // Turn on backlight
    lcd.print("EE 04");
    lcd.setCursor(5, 3);           // Turn on backlight
    lcd.print("17");
          // Print message on LCD
}

void loop() {
}
