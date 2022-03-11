const int lightPin = A0;

int lightValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(lightPin, INPUT);

}

void loop() {
  lightValue = analogRead(lightPin);
  Serial.println(lightValue);
  delay(500);

}