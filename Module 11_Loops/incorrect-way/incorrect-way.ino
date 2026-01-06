void setup() {
  Serial.begin(115200);

  for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 2; j++) {
      Serial.print(i);
      Serial.print(",");
      Serial.println(j);
    }
  }
}

void loop() {
  
}
