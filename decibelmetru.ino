#include <MD_MAX72xx.h>

const uint8_t MATRIX_CS = 10;
MD_MAX72XX mx = MD_MAX72XX(MD_MAX72XX::FC16_HW, MATRIX_CS, 4);

const uint8_t BAR_PINS[10] = {2, 3, 4, 5, 6, 7, 8, 9, A1, A2};

void setup() 
{
  mx.begin();
  mx.control(MD_MAX72XX::INTENSITY, 3);
  mx.clear();

  for (uint8_t i = 0; i < 10; i++) 
  {
    pinMode(BAR_PINS[i], OUTPUT);
    digitalWrite(BAR_PINS[i], LOW);
  }
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

  // bar graph: segmentele se aprind pe rand, apoi se sting
  for (uint8_t i = 0; i < 10; i++) { digitalWrite(BAR_PINS[i], HIGH); delay(100); }
  for (int i = 9; i >= 0; i--)     { digitalWrite(BAR_PINS[i], LOW);  delay(100); }
}