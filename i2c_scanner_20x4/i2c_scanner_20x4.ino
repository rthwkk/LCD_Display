#include <Wire.h>

void setup() {
    Serial.begin(115200);
    Wire.begin(D4, D3);  // ESP8266 default I2C pins (SDA = D2, SCL = D1)

    Serial.println("Scanning I2C devices...");
    for (byte address = 1; address < 127; address++) {
        Wire.beginTransmission(address);
        if (Wire.endTransmission() == 0) {
            Serial.print("I2C device found at address 0x");
            Serial.println(address, HEX);
        }
    }
}

void loop() {
}
