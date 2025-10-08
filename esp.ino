#define BLYNK_TEMPLATE_ID "TMPL6jySloDYd"
#define BLYNK_TEMPLATE_NAME "esp"
#define BLYNK_AUTH_TOKEN "1cdNKtCcvOuHTDQi48Nt7EivOcTwnyTG"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// 🏠 Thông tin WiFi thật (có Internet)
const char* ssid = "TP-Link_297A";               // 👉 Đổi thành tên WiFi nhà bạn
const char* password = "87488128";  // 👉 Đổi thành mật khẩu WiFi nhà bạn

// Biến lưu dữ liệu
String uartData = "";
float temperature = 0.0;
float humidity = 0.0;

void setup() {
  Serial.begin(9600);  // UART nhận dữ liệu từ STM32
  delay(1000);
  Serial.println();
  Serial.println("ESP8266 starting...");

  // Kết nối WiFi
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\n✅ WiFi connected");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  // Kết nối Blynk Cloud
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, password);
  Serial.println("✅ Connected to Blynk");
}

void loop() {
  Blynk.run();

  // Nhận dữ liệu UART từ STM32 (ví dụ: "26.4,54.2\n")
  if (Serial.available()) {
    uartData = Serial.readStringUntil('\n');
    uartData.trim();

    int commaIndex = uartData.indexOf(',');
    if (commaIndex > 0) {
      String tempStr = uartData.substring(0, commaIndex);
      String humStr = uartData.substring(commaIndex + 1);

      temperature = tempStr.toFloat();
      humidity = humStr.toFloat();

      // Gửi lên Blynk
      Blynk.virtualWrite(V0, temperature);
      Blynk.virtualWrite(V1, humidity);

      Serial.println("📡 Sent to Blynk:");
      Serial.println("Temperature: " + String(temperature) + " °C");
      Serial.println("Humidity: " + String(humidity) + " %");
    }
  }
}
