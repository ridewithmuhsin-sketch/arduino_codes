// https://learn.stemtera.com/en/begin/exercise-7?utm_source=chatgpt.com

int brightness;
int lightLevel;
int ambient=120;
int totalDark=240;

void setup() {
    pinMode(9, OUTPUT);
    pinMode(A0, INPUT);
    Serial.begin(9600);
}

void loop() {
    lightLevel = analogRead(A0);
    brightness = map(lightLevel, ambient, totalDark, 0, 255);
    if (brightness<0) brightness=0;
    analogWrite(9, brightness);

    Serial.print("Light Level=");
    Serial.print(lightLevel);
    Serial.print(", ");
    Serial.print("Brightness=");
    Serial.println(brightness);
}


//


const int ldrPin = A0;
const int ledPin = 9;

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(ldrPin);

  Serial.print("Light Level = ");
  Serial.println(lightLevel);

  if (lightLevel < 300) {
    // Dark
    digitalWrite(ledPin, HIGH);
  } 
  else {
    // Bright
    digitalWrite(ledPin, LOW);
  }

  delay(100);
}