
/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 modified 7 Nov 2016
 by Arturo Guadalupi

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystalHelloWorld

*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

/*
A set of custom made large numbers for a 16x2 LCD using the 
 LiquidCrystal librabry. Works with displays compatible with the 
 Hitachi HD44780 driver. 
 
 The Cuicuit:
 LCD RS pin to D7
 LCD Enable pin to D6
 LCD D4 pin to D5
 LCD D5 pin to D4
 LCD D6 pin to D3
 LCD D7 pin to D2
 LCD Vee tied to a pot to control brightness
 LCD Vss and R/W tied to ground
 LCD Vcc to +5V
 LCD pin 15 tied to pushbutton for control of backlight
 
 Made by Michael Pilcher
 2/9/2010
 */

int x = 0;
// the 8 arrays that form each segment of the custom numbers
byte LT[8] = 
{
  B00111,
  B01111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};
byte UB[8] =
{
  B11111,
  B11111,
  B11111,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};
byte RT[8] =
{
  B11100,
  B11110,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};
byte LL[8] =
{
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B01111,
  B00111
};
byte LB[8] =
{
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B11111,
  B11111,
  B11111
};
byte LR[8] =
{
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11110,
  B11100
};
byte UMB[8] =
{
  B11111,
  B11111,
  B11111,
  B00000,
  B00000,
  B00000,
  B11111,
  B11111
};
byte LMB[8] =
{
  B11111,
  B00000,
  B00000,
  B00000,
  B00000,
  B11111,
  B11111,
  B11111
};





void customA()
{
  lcd.setCursor(x,0);
  lcd.write(8);
  lcd.write(6);
  lcd.write(2);
  lcd.setCursor(x, 1);
  lcd.write(255);
  lcd.write(254);
  lcd.write(255);
}


void customI()
{
  lcd.setCursor(x,0);
  lcd.write(1);
  lcd.write(255);
  lcd.write(1);
  lcd.setCursor(x,1);
  lcd.write(4);
  lcd.write(255);
  lcd.write(4);
}



void customT()
{
  lcd.setCursor(x,0);
  lcd.write(1);
  lcd.write(255);
  lcd.write(1);
  lcd.setCursor(x,1);
  lcd.write(254);
  lcd.write(255);
}


void customW()
{
  lcd.setCursor(x,0);
  lcd.write(255);
  lcd.write(254);
  lcd.write(254);
  lcd.write(255);
  lcd.setCursor(x,1);
  lcd.write(3);
  lcd.write(8);
  lcd.write(2);
  lcd.write(5);
}


void letters1()
{
  customW();
x = x + 5;
  customA();
  x = x + 4;
  customI();
  x = x + 4;
  customT();
}



void setup()
{
  // assignes each segment a write number

  // sets the LCD's rows and colums:
  lcd.begin(0, 2);
  letters1();

}

void loop()
{
  
}



