int button = 5;//D1
int LED = 14;//D5
void setup()
{
  pinMode(button,INPUT_PULLUP);//设定为上拉
  pinMode(LED, OUTPUT);//设定输出
  digitalWrite(LED, 0);//初始低电平
}

void loop()
{
  if(digitalRead(button)==0)
  {
  digitalWrite(LED,1);  
  }
  else
    {
    digitalWrite(LED, 0);
    }
}
