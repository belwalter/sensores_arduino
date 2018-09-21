#define SensorValue A0

void setup()
{
  Serial.begin(9600);
  //pinMode(A0, INPUT);
}

void loop()
{
  int humedad = analogRead(SensorValue);
  Serial.print(humedad); Serial.print(" - ");
  
  if(humedad >= 1000) {
   Serial.println("Sensor is not in the Soil or DISCONNECTED");
  }
  if(humedad < 1000 && humedad >= 600) { 
   Serial.println("Soil is DRY");
  }
  if(humedad < 600 && humedad >= 370) {
   Serial.println("Soil is HUMID"); 
  }
  if(humedad < 370) {
   Serial.println("Sensor in WATER");
  }
  delay(1000);
}


