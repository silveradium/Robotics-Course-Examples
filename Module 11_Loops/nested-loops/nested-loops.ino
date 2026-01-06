unsigned long previousTime = 0;
const unsigned long interval = 1000;
int seconds = 0;

void loop() {
  unsigned long currentTime = millis();

  if (currentTime - previousTime >= interval) {
    previousTime = currentTime;
    Serial.println(seconds);
    seconds++;
  }
}
