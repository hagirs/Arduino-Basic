
void setup(){
/* Program akan dijalankan sekali saja setiap arduino di mulai, fungsi ini digunakan untuk menginisialisasi variabel mendekralasikan pin , mengunakan library dll. */
  Serial.begin(9600);
  Serial.println("aku ada di void setup");
}
void loop(){
/* Program akan dijalankan berulang kali setelah fungsi void setup dijalankan,fungsi ini digunakan untuk mengeksekusi dan menjalankan program yang sudah dibuat */
  Serial.println("aku ada di void loop");
}

