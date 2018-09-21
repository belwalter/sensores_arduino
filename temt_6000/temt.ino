 #define luz A0
   
   
void setup() {  
    Serial.begin(9600);   
 }  
   
void loop() {  
  // read the analog in value:  
  int sensorValue = analogRead(luz);        
       
  Serial.print("sensor = " );              
  Serial.println(sensorValue);     
   
  delay(1000);             
 }  
