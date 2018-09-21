#define LDR A5

void setup() 
{   
  Serial.begin(9600);
} 

void loop() 
{ 
  int luz = analogRead(LDR);
  Serial.print("Luminosidad");
  Serial.println(luz); 
  delay(1000);
}
