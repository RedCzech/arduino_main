/*
 GPIO 0~15不使用
 GPIO 1(TX0) 3(RX0) 藍芽
 GPIO 16~39使用
 GPIO 16 數位輸出
 GPIO 21 22 IIC_I2C數據腳
 GPIO 34 35 36 39 只輸入 (電壓電流)
*/
// 數據庫
#include <BluetoothSerial.h>  // 藍芽

// 藍芽
BluetoothSerial SerialBT;

// 電壓電流
#define VT0_PIN 34
#define AT0_PIN 35
#define VT1_PIN 36
#define AT1_PIN 39
#define ARDUINO_WORK_VOLTAGE 5.0

void setup() {
  Serial.begin(9600);
  SerialBT.begin("ESP32_BT"); //藍牙顯示名稱，可自行更改，需避免與他人重複命名
  Wifi.mode(WIFI_OFF);

}

void loop() {
  SerialBT.write(#輸出內容#);
  
}
