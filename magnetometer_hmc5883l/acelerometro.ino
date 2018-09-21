#include "Wire.h"
#include "I2Cdev.h"
#include "HMC5883L.h"

HMC5883L magnetometro;

int16_t mx, my, mz;
void setup() {
    
    Serial.begin(9600);
    Serial.println("Inicializando Magnetometro...");
    //Inicializamos la comunicación I2C y el magnetómetro
    Wire.begin();
    magnetometro.initialize();
}

void loop() {
    //Obtenemos del magnetometro las componentes del campo magnético
    magnetometro.getHeading(&mx, &my, &mz);
    
    Serial.print("mx:");
    Serial.print(mx); 
    Serial.print("\tmy:");
    Serial.print(my);
    Serial.print("\tmz:");
    Serial.println(mz);
    delay(100);
}
