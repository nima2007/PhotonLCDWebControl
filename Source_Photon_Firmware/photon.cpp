#include "application.h"

/*
  LiquidCrystal Library

 
  The circuit:
 * LCD RS pin to digital pin D0
 * LCD EN pin to digital pin D1
 * LCD D4 pin to digital pin D2
 * LCD D5 pin to digital pin D3
 * LCD D6 pin to digital pin D4
 * LCD D7 pin to digital pin D5
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 * connect R/W (pin 5) to ground
 
 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 8 Feb 2010
 by Tom Igoe
 
 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

//#include "LiquidCrystal.h"
#include "LiquidCrystal/LiquidCrystal.h"
// Make sure to update these to match how you've wired your pins.
// pinout on LCD [RS, EN, D4, D5, D6, D7];
// pin nums LCD  [ 4,  6, 11, 12, 13, 14];
// Shield Shield [RS, EN, D4, D5, D6, D7];
// Spark Core    [D3, D5, D2, D4, D7, D8];
LiquidCrystal lcd(D0, D1, D2, D3, D4, D5);

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16,2);
  // Print a welcome message to the LCD.
  lcd.print("Hello, There!");

  
  pinMode(A5, OUTPUT);
  
  Particle.function("up", sendmessegea);
  Particle.function("down", sendmessegeb);
  Particle.function("clear", clear);
  Particle.function("beep", beepthree);
}


void loop() { //not used

}

int sendmessegeb(String st) //set bottem
{
    
 lcd.setCursor(0, 1);
 lcd.print(st);
 return 4;
}

int sendmessegea(String st) //set top
{
    
 lcd.setCursor(0, 0);
 lcd.print(st);
 return 4;
}

int clear(String st) //clear the screen
{
    lcd.clear();
    return 4;
}

int beepthree(String st) //flickers or beeps a led or buzzer (optional)
{
    analogWrite(A5, 400, 920);
    delay(700);
    analogWrite(A5, 0);
    delay(300);
    analogWrite(A5, 400, 920);
    delay(700);
    analogWrite(A5, 0);
    delay(300);
    analogWrite(A5, 400, 920);
    delay(700);
    analogWrite(A5, 0);
    delay(300);
    analogWrite(A5, 400, 920);
    delay(700);
    analogWrite(A5, 0);
    
}