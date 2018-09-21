#define FlamePin 2

void setup() {
  pinMode(FlamePin, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  int Flame = digitalRead(FlamePin);
  if (Flame== HIGH)
  {
    Serial.println("HIGH FLAME");
  }
  else
  {
    Serial.println("No flame");
  }
  delay(1000);
}
