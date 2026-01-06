int x = 3;
int y = 20;

void setup() {
  Serial.begin(115200);

  if (x > 10 || y > 15) {
    Serial.println("At least one is TRUE");
  }
}

void loop() {}
