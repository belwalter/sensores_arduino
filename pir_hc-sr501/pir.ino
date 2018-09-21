#define inputPin 2
 
void setup() {
  pinMode(inputPin, INPUT);
 
  Serial.begin(9600);
}
 
void loop(){
  int val = digitalRead(inputPin);
  if (val == HIGH) {
    Serial.println("Motion detected!");
  } 
  else {
    Serial.println("Motion ended!");
  }
  delay(1000);
}
