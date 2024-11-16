#include <SoftwareSerial.h> //Library Serial
//serial menggunakan pin D2 dan D1
SoftwareSerial NodeMCU(D2, D1);

void setup() {
  Serial.begin(9600);
  
  NodeMCU.begin(4800);
  pinMode(D2, INPUT);
  pinMode(D1, OUTPUT);
}

void loop() {
  //menampilkan teks dari arduino
  if (NodeMCU.available()) {
    String dataFromArduino = NodeMCU.readStringUntil('\n');
    Serial.println("Data dari Arduino: " + dataFromArduino);
  }
  delay(100);
}
