#Arduino 

Arduino adalah sebuah papan rangkaian tercetak yang diatasnya sudah terpasang mikrokontroler
yang sudah berisi progam Boatloader, komponen-komponen pendukung, soket-soket untuk I/O
dan IC konverter USB ke Serial.Mayoritas seri Arduino menggunakan mikrokontroler AVR yang memiliki fasilitas bootloader.
Boatloader adalah program yang dikerjakan hanya sekali pada saat pertama kali Arduino
dinyalakan atau direset. AVR juga memiliki fasilitas untuk memprogram dirinya sendiri. Arduino
memanfaatkan kedua fasilitas tersebut untuk menerima data program dan menuliskannya pada
memori program, sehingga tidak diperlukan perangkat tambahan untuk mengunggah program ke
IC mikrokontroler.Arduino juga dilengkapi dengan lingkungan pengembangan terintegrasi yang sederhana namun
lengkap dan mudah digunakan, dilengkapi dengan contoh-contoh, dukungan komunitas yang
luas di dunia maya, tersedia untuk berbagai sistem operasi seperti Windows, Linux bahkan
Android untuk Smartphone.Arduino juga bersifat open-sources, sehingga banyak para pengembang dan kontributor di
seluruh dunia ikut mengembangkan sistem ini. Selain itu arduino banyak diproduksi secara masal
oleh banyak pihak, hal ini disatu sisi sangat menguntungkan bagi para pengguna karena harga
per unit arduino bisa menjadi murah
arduino yang umum di pakai dalam pembelajaran antara lain :

**Arduino Nano**
Arduino Nano memiliki dimensi 4,3 cm x 1,8 cm, menggunakan IC mikrokontroler
ATMEGA328P, memiliki 30 pin, yang terdiri dari 13 pin digital, 8 pin analog, pin reset, pin
VREF, pin tegangan 5 Volt dan pin ground. Dapat dipasang pada papan percobaan (project board).
Arduino Nano original menggunakan IC konverter USB ke Serial jenis FT232RL. Namun ada
juga versi kloningan yang harganya lebih murah menggunakan IC konverter USB ke Serial
CH340. Untuk pengguna linux tidak ada masalah baik versi original maupun kloningan, namun
untuk pengguna Windows, perlu menginstall driver-nya terlebih dahulu.


![Bentuk Fisik arduino nano](arduino_nano.png)


#Spesifikasi
| ---------------- | ---------------------------------------- |
| Mikrokontroler   | ATmega328                                |
| Arsitektur       | AVR                                      |
| Tegangan Operasi | 5 V                                      |
| SRAM             | 2 KB                                     |
| Kecepatan Clock  | 16 MHz                                   |
| Analog IN Pins   | 8                                        |
| EEPROM           | 1 KB                                     |                                  
| Arus DC per I/O  | Pins 40 mA (I/O Pins)                    |
| Input Voltage    | 7-12 V                                   |
| Digital I/O Pins | 22 (6 of which are PWM)                  |
| Keluaran PWM     | 6                                        |
| Konsumsi Daya    | 19 mA                                    |
| Ukuran PCB       | 18 x 45 mm                               |
| Berat +/-        | 7 g                                      |
| Flash Memory     | 32 KB of which 2 KB used by bootloader   |

