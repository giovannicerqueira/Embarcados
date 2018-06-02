#include <Arduino.h>
#include <HCSR04.h>
#include <LiquidCrystal.h>

HCSR04 hc (6,7);

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
    lcd.begin(16,2);
    lcd.print("Distancia");
}

void loop() {
    lcd.setCursor(0,1);
    lcd.print(hc.dist());
    delay(500);
}