int ledAdditionPin = 2;
int ledSubtractionPin = 3;
int ledMultiplicationPin = 4;
int ledDivisionPin = 5;
int value = 1;
long randNumber;



void setup() {
  pinMode(ledAdditionPin, OUTPUT);
  pinMode(ledSubtractionPin, OUTPUT);
  pinMode(ledMultiplicationPin, OUTPUT);
  pinMode(ledDivisionPin, OUTPUT);
}

void loop() {
  randNumber = random(2, 6);
  if(randNumber == 2){
    value++;
    digitalWrite(ledAdditionPin, HIGH);
    delay(100);
    digitalWrite(ledAdditionPin, LOW);
    delay(100);
  } else if(randNumber == 3){
    value--;
    digitalWrite(ledSubtractionPin, HIGH);
    delay(100);
    digitalWrite(ledSubtractionPin, LOW);
    delay(100);
  } else if(randNumber == 4){
    value *= 2;
    digitalWrite(ledMultiplicationPin, HIGH);
    delay(100);
    digitalWrite(ledMultiplicationPin, LOW);
    delay(100);
  } else if(randNumber == 5){
    value /= 2;
    digitalWrite(ledDivisionPin, HIGH);
    delay(100);
    digitalWrite(ledDivisionPin, LOW);
    delay(100);
  }
  

}
