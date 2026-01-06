void setup() {
 pinMode(2, OUTPUT);   // Set pin 2 as output
}


void loop() {
 digitalWrite(2, HIGH);   // Turn LED ON
 delay(1000);             // Wait 1 second
 digitalWrite(2, LOW);    // Turn LED OFF
 delay(1000);             // Wait 1 second
}
