#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int value = 0;
int sense = A5;

void setup() {
  lcd.begin(16, 2);
  lcd.print("WATER LEVEL: ");
  
}

void loop() {
  lcd.setCursor(0,1);
  value = analogRead(sense);
  if(value<=100){
    lcd.println("Empty");
  }
  else if (value>100 && value <=300){
    lcd.println("Low");
  }
  else if(value>300 && value<=330){
    lcd.println("Medium");
  }
  else if(value>330){
    lcd.println("High");
  }

  delay(1000);
}
