/*
 Name:		Sketch1.ino
 Created:	11/20/2026 7:00:01 PM
 Author:	DELL
*/

int LED1pin = 12;
int buttonpin = 2;

// the setup function runs once when you press reset or power the board
void setup() {
	pinMode(LED1pin, OUTPUT);
	pinMode(buttonpin, INPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
	if (digitalRead(buttonpin) == HIGH) {
		digitalWrite(LED1pin, HIGH);
	}
	else {
		digitalWrite(LED1pin, LOW);
	}
}
