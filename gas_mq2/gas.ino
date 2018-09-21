#define gasPin A0

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int smooke = analogRead(gasPin);
  if(smooke>400){
    Serial.println("Smoke detected");
  }
  else{
    Serial.println("No Smoke");
  }
  
  delay(2000);
}
