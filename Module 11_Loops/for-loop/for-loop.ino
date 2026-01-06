void setup() {
  Serial.begin(115200);

  for (int i = 0; i < 5; i++) {
    Serial.println(i);
  }
}

void loop() {}
