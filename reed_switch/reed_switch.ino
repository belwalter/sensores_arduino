#define pinSwitch 12

void setup() {
   Serial.begin(9600);
   pinMode(pinSwitch, INPUT);     
}

void loop(){
   int estadoSwitch = digitalRead(pinSwitch);
   if (estadoSwitch == HIGH) {     
       Serial.println("Activado");
   } 
   else {
       Serial.println("Activado");
   }
}
