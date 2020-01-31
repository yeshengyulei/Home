//黑低，白高
int LH=5;
int RH=6;
int LD=7;
int RD=8;
void setup() 
{
  pinMode(LH,INPUT_PULLUP);
  pinMode(RH,INPUT_PULLUP);
  pinMode(LD,OUTPUT);
  pinMode(RD,OUTPUT);
  digitalWrite(LD, 0);
  digitalWrite(RD, 0);
  
}

void loop() 
{
  if(digitalRead(LH)==1)
  {
    digitalWrite(RD, 1);
  }
  if(digitalRead(RH)==1)
  {
    digitalWrite(LD, 1);
  }
}
