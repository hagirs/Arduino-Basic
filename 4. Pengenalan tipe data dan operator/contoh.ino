
void setup() {
Serial.begin(9600);
/* tipe data yang umum digunakan */
bool b = true; // mendeklarasikansebuah variabel berupa true atau 1 , tipe data ini hannya memiliki nilai true (1) dan false (0),dapat menyimpan data sebesar 8bit
String s = "Hello Dunia"; // mendeklarasikan sebuah variabel berupa alfanumerik memuat angka, huruf maupun simbol-simbol
int i = 19; // mendeklarasikan sebuah variabel berupa angka desimal, dapat menyimpan data sebesar 16bit
float f = 19.0; // mendeklarasikan sebuah variabel berupa angka desimal dibelakang koma, dapat menyimpan data sebesar 32bit
char c = 65; //mendeklarasikan sebuah variabel berupa A,B,C,* dll. untuk mengkonversikan angka menjadi karakter anda bisa melihatnya di ASCII Table 
byte i = 64; //...
int arr[] = {1,2,3,4,5} //...

/* operator aritmatika */
Serial.println("Operator Aritmatika");
Serial.println(2+1); // Penjumlahan
Serial.println(2-1); // Pengurangan
Serial.println(2*2); // Perkalian
Serial.println(2/2); // Pembagian
Serial.println(7%5); // Modulus / Sisa bagi

/* operator pembanding */
/* == ( Sama dengan )
 * != ( Tidak sama dengan )
 * < ( Lebih kecil dari )
 * > ( Lebih besar dari )
 */
Serial.println("Operator Pembanding");
Serial.println(10==10);// output 1 / TRUE
Serial.println(10!=10); // output 0 / FALSE
Serial.println(10<11); // output 1 / TRUE
Serial.println(10>11); // output 0 / FALSE  
}

void loop() {
}
