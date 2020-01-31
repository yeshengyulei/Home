//ESP8266只有一个模拟引脚A0
int analogPin = A0;
int LEDPIN = 14;//D5
void setup() 
{
  pinMode(LEDPIN,OUTPUT);
}

void loop()
{
  float analogValue = analogRead(analogPin);
  analogWrite(LEDPIN, analogValue);
  delay(1);
}
