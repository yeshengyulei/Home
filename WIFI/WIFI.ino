#include <ESP8266WiFi.h>

const char* ssid = "wifiming";
const char* password = "wifimima";

void setup() 
{
  Serial.begin(115200);
  WiFi.begin(ssid,password);
  while (WiFi.status() !=WL_CONNECTED)
   {
    delay(1000);
    Serial.println("正在连接WiFi");
   }
  Serial.println("");
  Serial.println(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:

}
