#include <MD_MAX72xx.h>

const uint8_t MATRIX_CS = 10;
MD_MAX72XX mx = MD_MAX72XX(MD_MAX72XX::FC16_HW, MATRIX_CS, 4);

void setup() 
{
  mx.begin();
  mx.control(MD_MAX72XX::INTENSITY, 3);
  mx.clear();
}

void loop() 
{
  // matrice: o coloana aprinsa traverseaza ecranul
  for (uint8_t c = 0; c < 32; c++)
  {
    mx.clear();
    mx.setColumn(c, 0xFF);
    delay(50);
  }
  mx.clear();
}