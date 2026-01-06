int add(int a, int b) {
  return a + b;
}

Usage:
void setup() {
  Serial.begin(115200);

  int result = add(5, 7);
  Serial.println(result);
}
