
const int soundPin = 2;
const int ledPin = 8;

int previousState = HIGH;

void setup() {
  pinMode(soundPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);

  digitalWrite(ledPin, LOW);
}

void loop() {

  int currentState = digitalRead(soundPin);

  // Detect a change from HIGH to LOW
  if (previousState == HIGH && currentState == LOW) {

    Serial.println("SOUND DETECTED!");

    digitalWrite(ledPin, HIGH);

    delay(5000);  // LED stays ON for 2 seconds

    digitalWrite(ledPin, LOW);

    Serial.println("LED OFF");
  }

  previousState = currentState;
}
