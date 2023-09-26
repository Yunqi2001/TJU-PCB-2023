int lightSensor = 0;
int lightPin = A5;
int touchSensor = 0;
int touchPin = 12;

void setup() {
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  pinMode(touchPin,INPUT);
}

void loop() {
  lightSensor = analogRead(lightPin);
  touchSensor = digitalRead(touchPin);

  Serial.print("light sensor = ");
  Serial.println(lightSensor);
  delay(300);
  Serial.print("touch sensor = ");
  Serial.println(touchSensor);
  delay(300);
}
