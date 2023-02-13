int potPin = 2; // Connect pin to Arduino A2 
int ledPin = 13; // select the pin for the LED
int val = 0; // variable to store the value coming from the sensor
void setup() {
pinMode(ledPin, OUTPUT); // declare the ledPin as an OUTPUT
Serial.begin(9600);
}
void loop() {
val = analogRead(potPin); // read the value from the sensor
digitalWrite(ledPin, HIGH); // turn the ledPin on
delay(val); // stop the program for some time
digitalWrite(ledPin, LOW); // turn the ledPin off
delay(val); // stop the program for some time
}
