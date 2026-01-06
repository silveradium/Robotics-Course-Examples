int count = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  count = count + 1;
  Serial.println(count);
  delay(1000);
}
