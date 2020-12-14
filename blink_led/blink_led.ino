/*********************************************************************
  Blink

  Bir pin'e bir saniye süreyle 5V (HIGH) ve ardından tekrar bir saniye süreyle 0V (LOW) gerilim uygular.

  ALPHA-BOARD üzerindeki yerleşik biçimde bulunan ledlerin bağlı olduğu pinler (D3,D4,D5)
  bu örnek kod ile kontrol edilebilir.
  
  Yusuf Enes TATAR
  düzenleme 12.12.2020
   
  Bu örnek kod PHOTON TECHNOLOGY tarafından kamuya sunulmuştur.

  https://github.com/PhotonTechnologyCodeSpace/Alpha-Board
  
**********************************************************************/


// LED değişkeni, ALPHA-BOARD üzerindeki 4.pine tanımlıyor.
#define LED 4 

//void setup bloğunda konfigürasyon ayarlamaları yapılır.
void setup() {
  // LED değişkeninin bulunduğu 4.pin dijital çıkış olarak ayarlandı.
  pinMode(LED, OUTPUT);
}


// döngü işlevi sonsuza kadar tekrar tekrar çalışır.
void loop() {
  digitalWrite(LED, HIGH);     // LED'i çalıştırdı (HIGH, 5V seviyesindedir)
  delay(1000);                //  1 saniye bekleme komutu
  digitalWrite(LED, LOW);    //   LED'i kapattı (LOW, 0V seviyesindedir)
  delay(1000);              //    1 saniye bekleme komutu  
}
