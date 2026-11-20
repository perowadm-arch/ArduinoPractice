/*
 Name:		Sketch1.ino
 Created:	11/20/2026 7:00:01 PM
 Author:	DELL
*/



// the setup function runs once when you press reset or power the board
void setup() {
	pinMode(12, OUTPUT);
	pinMode(10, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
	digitalWrite(10, LOW);
	digitalWrite(12, HIGH);
	delay(1000);
	digitalWrite(12, LOW);
	digitalWrite(10, HIGH);
	delay(1000);
}
