#include <Arduino.h>
#include <LiquidCrystal.h>
#include <Adafruit_Si7021.h>

Adafruit_Si7021 sensor = Adafruit_Si7021();
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  sensor.begin();
  lcd.begin(16, 2);
  lcd.print("Umid");
  lcd.setCursor(7,0);
  lcd.print("Temp");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(sensor.readHumidity());
  lcd.setCursor(7,1);
  lcd.print(sensor.readTemperature());
  delay(1000);
}
