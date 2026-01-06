void setup() {
 pinMode(12, OUTPUT);   // Set pin 2 as output
}


void loop() {
 digitalWrite(12, HIGH);   // Turn LED ON
 delay(1000);             // Wait 1 second
 digitalWrite(12, LOW);    // Turn LED OFF
 delay(1000);             // Wait 1 second
}
