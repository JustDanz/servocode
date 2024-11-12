# Servo Control with ESP32, ESP8266, and Arduino

This project demonstrates how to control a servo motor using **ESP32**, **ESP8266**, and **Arduino**. The servo motor will rotate to different angles (0, 90, 180 degrees) with a delay between movements.

## Requirements

### Hardware
- **ESP32**, **ESP8266**, or **Arduino** (any model with PWM-capable pins)
- **Servo Motor**
- Jumper wires
- External power supply for servo (optional but recommended)

### Software
- Arduino IDE
- **ESP32** or **ESP8266** board package installed in Arduino IDE
- **Servo** library (pre-installed in Arduino IDE)

## Installation

1. **Arduino IDE Setup:**
   - Install the required board libraries:
     - For ESP32: Go to **File > Preferences > Additional Boards Manager URLs**, then add the following URL:
       ```
       https://dl.espressif.com/dl/package_esp32_index.json
       ```
     - For ESP8266: Go to **File > Preferences > Additional Boards Manager URLs**, then add the following URL:
       ```
       http://arduino.esp8266.com/stable/package_esp8266com_index.json
       ```
   - Install the **Servo** library if not already installed (this is pre-installed for Arduino).

2. **Upload the Code:**
   - Open the code for **ESP32**, **ESP8266**, or **Arduino** depending on the platform you are using.
   - Select the appropriate board and port in the Arduino IDE.
   - Upload the code to the board.

3. **Wiring the Servo:**
   - Connect the **Servo** motor to the corresponding PWM pin on your board:
     - **ESP32**: Pin 13
     - **ESP8266**: Pin D1
     - **Arduino**: Pin 9
   - Connect the servo's power and ground to an external power source (if needed).

## Code Example

### ESP32

```cpp
#include <ESP32Servo.h>

Servo myServo;

void setup() {
  myServo.attach(13); // Pin 13 for servo
}

void loop() {
  myServo.write(0);    // Servo position 0 degrees
  delay(1000);
  myServo.write(90);   // Servo position 90 degrees
  delay(1000);
  myServo.write(180);  // Servo position 180 degrees
  delay(1000);
}
```

### ESP8266

```cpp
#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(D1); // Pin D1 for servo
}

void loop() {
  myServo.write(0);    // Servo position 0 degrees
  delay(1000);
  myServo.write(90);   // Servo position 90 degrees
  delay(1000);
  myServo.write(180);  // Servo position 180 degrees
  delay(1000);
}
```

### Arduino

```cpp
#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(9); // Pin 9 for servo
}

void loop() {
  myServo.write(0);    // Servo position 0 degrees
  delay(1000);
  myServo.write(90);   // Servo position 90 degrees
  delay(1000);
  myServo.write(180);  // Servo position 180 degrees
  delay(1000);
}
```

## Troubleshooting

- If the servo is not moving:
  - Ensure that the servo is powered properly. You may need an external power supply if using a high-power servo.
  - Check the pin connections to ensure the servo is attached to the correct PWM pin.
  
- If the servo behaves erratically:
  - The power supply to the servo may not be sufficient. Use a separate power supply for the servo and ensure it's grounded properly with the ESP32/ESP8266/Arduino.

# Indonesia

# Kontrol Servo dengan ESP32, ESP8266, dan Arduino

Proyek ini menunjukkan cara mengontrol motor servo menggunakan **ESP32**, **ESP8266**, dan **Arduino**. Motor servo akan berputar ke sudut yang berbeda (0, 90, 180 derajat) dengan jeda antara gerakan.

## Persyaratan

### Perangkat Keras
- **ESP32**, **ESP8266**, atau **Arduino** (model apa pun dengan pin PWM)
- **Motor Servo**
- Kabel jumper
- Sumber daya eksternal untuk servo (opsional tapi disarankan)

### Perangkat Lunak
- Arduino IDE
- **ESP32** atau **ESP8266** board package yang diinstal di Arduino IDE
- **Servo** library (sudah terinstal di Arduino IDE)

## Instalasi

1. **Pengaturan Arduino IDE:**
   - Instal library board yang diperlukan:
     - Untuk ESP32: Pergi ke **File > Preferences > Additional Boards Manager URLs**, kemudian tambahkan URL berikut:
       ```
       https://dl.espressif.com/dl/package_esp32_index.json
       ```
     - Untuk ESP8266: Pergi ke **File > Preferences > Additional Boards Manager URLs**, kemudian tambahkan URL berikut:
       ```
       http://arduino.esp8266.com/stable/package_esp8266com_index.json
       ```
   - Instal library **Servo** jika belum terinstal (sudah terinstal di Arduino).

2. **Upload Kode:**
   - Buka kode untuk **ESP32**, **ESP8266**, atau **Arduino** sesuai dengan platform yang Anda gunakan.
   - Pilih board dan port yang sesuai di Arduino IDE.
   - Upload kode ke board.

3. **Menyambungkan Servo:**
   - Hubungkan motor **Servo** ke pin PWM yang sesuai pada board Anda:
     - **ESP32**: Pin 13
     - **ESP8266**: Pin D1
     - **Arduino**: Pin 9
   - Hubungkan daya servo ke sumber daya eksternal (jika diperlukan).

## Contoh Kode

### ESP32

```cpp
#include <ESP32Servo.h>

Servo myServo;

void setup() {
  myServo.attach(13); // Pin 13 untuk servo
}

void loop() {
  myServo.write(0);    // Posisi servo 0 derajat
  delay(1000);
  myServo.write(90);   // Posisi servo 90 derajat
  delay(1000);
  myServo.write(180);  // Posisi servo 180 derajat
  delay(1000);
}
```

### ESP8266

```cpp
#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(D1); // Pin D1 untuk servo
}

void loop() {
  myServo.write(0);    // Posisi servo 0 derajat
  delay(1000);
  myServo.write(90);   // Posisi servo 90 derajat
  delay(1000);
  myServo.write(180);  // Posisi servo 180 derajat
  delay(1000);
}
```

### Arduino

```cpp
#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(9); // Pin 9 untuk servo
}

void loop() {
  myServo.write(0);    // Posisi servo 0 derajat
  delay(1000);
  myServo.write(90);   // Posisi servo 90 derajat
  delay(1000);
  myServo.write(180);  // Posisi servo 180 derajat
  delay(1000);
}
```

## Pemecahan Masalah

- Jika servo tidak bergerak:
  - Pastikan servo mendapatkan daya yang cukup. Anda mungkin perlu menggunakan sumber daya eksternal jika menggunakan servo yang membutuhkan daya lebih tinggi.
  - Periksa sambungan pin untuk memastikan servo terhubung ke pin PWM yang benar.
  
- Jika servo bergerak secara tidak stabil:
  - Daya untuk servo mungkin tidak mencukupi. Gunakan sumber daya terpisah untuk servo dan pastikan ground-nya terhubung dengan ESP32/ESP8266/Arduino.


