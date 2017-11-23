const int motorPin = 7;
const int switchPin = 5;
const int motorTime = 3000; //in milliseconds
int switchState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT);
  pinMode(motorPin, OUTPUT);
  //Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(switchPin);
  if(switchState == HIGH){
    digitalWrite(motorPin, HIGH);
    Serial.println("Pressed");
    delay(motorTime);
    digitalWrite(motorPin, LOW);
    exit(NULL);
  }
  else{
    digitalWrite(motorPin, LOW);
  }
}
