void setup() {
  pinMode(2, OUTPUT);

  digitalWrite(2, HIGH);
  delay(3000);
  digitalWrite(2, LOW);
  delay(3000);

  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(500);

  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(500);
}

void loop() {
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
}



