#include <SPI.h>
#include <GxEPD2_3C.h>
#include <U8g2_for_Adafruit_GFX.h>  // https://github.com/olikraus/U8g2_for_Adafruit_GFX
#include "epaper.h"
#define ENABLE_GxEPD2_display 0

void setup() {
  InitialiseDisplay();

  u8g2Fonts.setFont(u8g2_font_helvB14_tf);
  uint8_t distance = 20;
  uint8_t counter = 0;
  const uint8_t startX = 10;
  const uint8_t startY = 10;
  const char *DISPLAY_TEXT = "Hello world!";

  drawString(startX, startY + 0 * distance, DISPLAY_TEXT);
  display.drawRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, GxEPD_BLACK);
  display.display(false); // Full screen update mode

  // Important use bring the display in one of the two modes to
  // avoid a damage of the display that cannot get repaired.
  //display.powerOff();
  display.hibernate();
}

void loop() {
}