int a = 5;
int b = 7;
int c = 0;

void setup() {
  Serial.begin(115200);
  c = a;
  a = b;
  b = c;
  Serial.println(a);
  Serial.println(b);
}

void loop() {
  
}
