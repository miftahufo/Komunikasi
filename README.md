# Komunikasi
Arduino uno dan nodemcu 8266
Pada arduino uno menggunakan komunikasi serial untuk mengirim data ke nodemcu, disini pin serial arduino uno diubah menggunakan pin 4 dan 3 lalu diberi nama "SoftwareSerial ArduinoUno", kemudian arduino mengirim pesan "ini Arduino" ke nodemcu esp 8266.

Selanjutnya pada nodemcu esp 8266 menggunakan pin serial untuk menerima pesan, disini pin serial diubah menjadi pin D2 dan D1 dengan nama "SoftwareSerial NodeMCU", pesan dari arduino uno akan di simpan pada variabel "dataFromArduino" dan nodemcu akan menampilkan isi pada variabel dataFromArduino


## Rangkaian
![Rangkaian](images/Rangkaian.jpeg "Create")
## Hasil
![Hasil](images/Hasil.jpeg "Hasil")
