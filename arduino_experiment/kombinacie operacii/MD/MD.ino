int ledAdditionPin = 2;
int ledSubtractionPin = 3;
int ledMultiplicationPin = 4;
int ledDivisionPin = 5;
int value = 1;

void setup() {
  pinMode(ledAdditionPin, OUTPUT);
  pinMode(ledSubtractionPin, OUTPUT);
  pinMode(ledMultiplicationPin, OUTPUT);
  pinMode(ledDivisionPin, OUTPUT);
}

void loop() {
  value *= 2;
  digitalWrite(ledMultiplicationPin, HIGH);
  delay(1000);
  digitalWrite(ledMultiplicationPin, LOW);
  delay(1000);

  value /= 2;
  digitalWrite(ledDivisionPin, HIGH);
  delay(1000);
  digitalWrite(ledDivisionPin, LOW);
  delay(1000);
}

