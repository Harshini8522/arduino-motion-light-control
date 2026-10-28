
const int pirPin = 2;
const int lightPin = 13;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(lightPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(pirPin);

  if (motion == HIGH) {
    digitalWrite(lightPin, HIGH);
    Serial.println("Motion detected - Light ON");
  } else {
    digitalWrite(lightPin, LOW);
    Serial.println("No motion - Light OFF");
  }

  delay(200);
}
