#include <U8g2lib.h>
//#include <U8x8lib.h>
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);
//使用SSD1306驱动的屏幕，四线硬件IIC接口

void setup() 
{
  u8g2.begin();
}

void loop()
{
  u8g2.clearBuffer();//清空显存
  u8g2.setFont(u8g2_font_ncenB08_tr);//选择字体
  u8g2.drawStr(20,30,"沙雕小包");//x,y,字符
  u8g2.sendBuffer();//发给缓存
  delay(1000);//延时一秒
}
