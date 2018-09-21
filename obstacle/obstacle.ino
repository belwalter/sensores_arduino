#define ProxSensor 2

void setup() {                
  Serial.begin(9600);
  pinMode(ProxSensor,INPUT);
}

void loop() {
  if(digitalRead(ProxSensor)==HIGH)
  {
    Serial.println("No detected");
  }
  else
  {
    Serial.println("Detected");
  }
  delay(1000);
}
