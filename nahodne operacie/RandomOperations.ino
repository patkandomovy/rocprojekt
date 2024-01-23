int ledAdditionPin = 2;
int ledSubtractionPin = 3;
int ledMultiplicationPin = 4;
int ledDivisionPin = 5;
int ledRandomOperationPin = 6;
int value = 32768;
long randomOperation

void setup() {
  pinMode(ledAdditionPin, OUTPUT);
  pinMode(ledSubtractionPin, OUTPUT);
  pinMode(ledMultiplicationPin, OUTPUT);
  pinMode(ledDivisionPin, OUTPUT);
}

void loop() {
  randomOperation = random(2, 6);
  delay(1000);
  digitalWrite(ledRandomOperationPin, HIGH);
  delay(1000);

  if(randomOperation == 2){
    value++;
    digitalWrite(ledAdditionPin, HIGH);
    delay(1000);
    digitalWrite(ledAdditionPin, LOW);
    delay(1000);
  } else if(randomOperation == 3){
    value--;
    digitalWrite(ledSubtractionPin, HIGH);
    delay(1000);
    digitalWrite(ledSubtractionPin, LOW);
    delay(1000);
  } else if(randomOperation == 4){
    value *= 2;
    digitalWrite(ledMultiplicationPin, HIGH);
    delay(1000);
    digitalWrite(ledMultiplicationPin, LOW);
    delay(1000)
  } else{
    value /= 2;
    digitalWrite(ledDivisionPin, HIGH);
    delay(1000);
    digitalWrite(ledDivisionPin, LOW);
    delay(1000)
  }
}

