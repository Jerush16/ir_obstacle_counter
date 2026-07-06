#include <LiquidCrystal_I2C.h>
const int sensor=9;
LiquidCrystal_I2C lcd(0x27,16,2);
int past_state=0;
int count=0;

void setup() {
  pinMode(sensor,INPUT);
  lcd.init();
  lcd.backlight();

}

void loop() {
  int state=digitalRead(sensor);
  if(past_state!=state){
    if(state==0){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Detected");
      lcd.print("        ");
      count=count+1;
      lcd.setCursor(0,1);
      lcd.print("Count :");
      lcd.print(count);
    }
    else{
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Not Detected");
      lcd.print("    ");
      lcd.setCursor(0,1);
      lcd.print("Count :");
      lcd.print(count);
    }
    past_state=state;
  }

}    
