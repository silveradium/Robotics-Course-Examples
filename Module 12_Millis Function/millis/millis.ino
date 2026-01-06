void setup() {
  pinMode(2, OUTPUT);
  blinkLED(3000);  
  blinkLED(500);
  blinkLED(500);   
}

void loop() {
  blinkLED(1000);  // slow
}

void blinkLED(int delayTime) {
  digitalWrite(2, HIGH);
  delay(delayTime);
  digitalWrite(2, LOW);
  delay(delayTime);
}

