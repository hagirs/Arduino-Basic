void setup() {
  Serial.begin(9600);
  /*Pernyataan if - else */
  
  int pinLed = 1;
  if(pinLed == 1){
    Serial.println("benar");  
  }else{
    Serial.println("salah");
  }

  /*Penjelasan : jika variabel sama dengan 1 maka tampilkan "benar"  jika tidak tampilkan "salah" */
  
}

void loop() {
  
}
