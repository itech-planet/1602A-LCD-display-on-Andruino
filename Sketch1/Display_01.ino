// reference the display libraries
#include <LiquidCrystal.h>

// create the lcd object & define the pin config for comunication
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
	// define display size (16 col y 2 rows)
	lcd.begin(16, 2);
}

void loop()
{
	lcd.clear();
	lcd.setCursor(0, 0); // init cursor (x, y)
	lcd.print("Hello world from:"); // print text
	lcd.setCursor(0, 1);
	lcd.print("itech-planet.net");
	delay(800);

	// loop the text 
	for (int mover = 0; mover <15; mover++)
	{
		lcd.scrollDisplayRight(); // moves the cursor 1 position to right
		delay(800); // time the cursor is stopped
	}

}