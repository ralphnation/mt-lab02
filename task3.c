const int buttonPin = 2;
const int lightPin = A0;
const int ledPin1 = 8;
const int ledPin2 = 9;
const int ledPin3 = 10;
const int ledPin4 = 11;
const int ledPin5 = 12;

int buttonState = 0;
int lightValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(lightPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);

}

void loop() {

	buttonState = digitalRead(buttonPin);
	lightValue = analogRead(lightPin);
	
	if (lightValue == 0) {
		digitalWrite(ledPin1, HIGH);
		digitalWrite(ledPin2, HIGH);
		digitalWrite(ledPin3, HIGH);
		digitalWrite(ledPin4, HIGH);
		digitalWrite(ledPin5, HIGH);
	}

	if (lightValue == 1) {
		if (buttonState == 0) {
			for (int i = 0; i < 5; i++) {
				digitalWrite(8+i, HIGH);
				foo = 8+i;
				delay(500);
				digitalWrite(8+i, LOW);
			}
		}
		else {
			for (int i = 0; i < 5; i++) {
				digitalWrite(8+i, HIGH);
				delay(500);
				digitalWrite(8+i, LOW);
			}
		}
	}
}