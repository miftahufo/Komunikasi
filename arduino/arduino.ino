#include <SoftwareSerial.h> //Library Serial

//pin serial menggunakan pin 4 dan 3
SoftwareSerial ArduinoUno (4, 3); 

void setup() {
  Serial.begin(9600);
  ArduinoUno.begin(4800);
}

void loop() {

  //mengirim teks ini arduino ke nodemcu
  ArduinoUno.println("Ini Arduino");
  delay(1000);
}
