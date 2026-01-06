int a = 7;
int b = 4;
int c = 12;

void setup() {
  Serial.begin(115200);

  if ((a > b && c > 10) || b == 4) {
    Serial.println("YES");
  } else {
    Serial.println("NO");
  }
}

void loop() {}
