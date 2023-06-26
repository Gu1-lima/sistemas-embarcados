// C++ code
//
#include <Adafruit_LiquidCrystal.h>

int seconds = 0;

Adafruit_LiquidCrystal lcd1(0);

void setup()
{
  lcd1.begin(16, 2);
  
  lcd1.print("Ola mundo!");
}

void loop()
{
  lcd1.setCursor(0, 1);
  lcd1.print(seconds);
  lcd1.setBacklight(1);
  delay(1000); // Wait for 1000 millisecond(s)
  seconds += 1;
}