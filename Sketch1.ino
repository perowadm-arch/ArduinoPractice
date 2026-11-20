/*
 Name:		Sketch1.ino
 Created:	11/20/2026 7:00:01 PM
 Author:	DELL
*/
#include <Wire.h>
#include <gfxfont.h>
#include <Adafruit_SPITFT_Macros.h>
#include <Adafruit_SPITFT.h>
#include <Adafruit_GrayOLED.h>
#include <Adafruit_GFX.h>
#include <splash.h>
#include <Adafruit_SSD1306.h>


#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// the setup function runs once when you press reset or power the board
void setup() {
	display.begin(SSD1306_SWITCHCAPVCC, 0x3c);
	display.clearDisplay();
	display.setTextSize(4);
	display.setTextColor(SSD1306_WHITE);
	display.setCursor(35, 25);
	display.println("67");
	display.display();
}

// the loop function runs over and over again until power down or reset
void loop() {
	
}
