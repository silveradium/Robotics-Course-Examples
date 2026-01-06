int count = 0;

void setup() {
  Serial.begin(115200);

  while (count < 10) {
    Serial.println(“I will never be late to class again”);
    count++;
  }
}

void loop() {}
