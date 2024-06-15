// 從序列埠讀取「類比輸入」值。

const byte potPin = A0;
int val;       // 接收類比輸入值的變數，類型為整數
void setup() {
  Serial.begin(9600);  // 以 9600bps 速率初始化序列埠
}
void loop() {
  val = analogRead(potPin);
  Serial.print("ADC值 = ");
  Serial.println(val);
  Serial.print("電壓值 = ");
  Serial.println(val/1023.0 * 5);
  delay(2000);
}
