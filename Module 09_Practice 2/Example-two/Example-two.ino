int seconds = 0;

void setup() {
 Serial.begin(115200);
}

void loop() {
 Serial.print("Time: ");
 Serial.print(seconds);
 Serial.println(" seconds");

 seconds++;       // increase counter
 delay(1000);     // wait 1 second
}
