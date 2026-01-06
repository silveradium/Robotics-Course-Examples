// ---------- CONSTANTS ----------
#define LED_PIN   2

const int SAFE_DISTANCE = 30;
const int WARNING_DISTANCE = 15;

// ---------- TIMING ----------
unsigned long previousBlinkTime = 0;
const unsigned long blinkInterval = 300;

// ---------- STATE ----------
bool ledState = false;

// ---------- FUNCTION DECLARATIONS ----------
int getDistance();                  
void blinkLED(unsigned long interval);
void handleDistance(int distance);

// ---------- SETUP ----------
void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

// ---------- LOOP ----------
void loop() {
  int distance = getDistance();
  handleDistance(distance);
}

// ---------- FUNCTIONS ----------

// Pretend this reads an ultrasonic sensor
int getDistance() {
  // implementation hidden
}

// Handles robot decision making
void handleDistance(int distance) {
  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance > SAFE_DISTANCE) {
    digitalWrite(LED_PIN, LOW);
  }
  else if (distance > WARNING_DISTANCE && distance <= SAFE_DISTANCE) {
    blinkLED(1000);
  }
  else {
    blinkLED(200);
  }
}

// Non-blocking LED blink
void blinkLED(unsigned long interval) {
  unsigned long currentTime = millis();

  if (currentTime - previousBlinkTime >= interval) {
    previousBlinkTime = currentTime;
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
  }
}
