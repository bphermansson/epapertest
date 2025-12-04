#include <SPI.h>
#include "epaper.h"
#define ENABLE_GxEPD2_display 0

void setup() {
  InitialiseDisplay();

  u8g2Fonts.setFont(u8g2_font_helvB24_tf);
  uint8_t distance = 20;
  const uint8_t startX = 3;
  const uint8_t startY = 30;
  const char *DISPLAY_TEXT = "Hello world!";

  drawString(startX, startY + 0 * distance, DISPLAY_TEXT);
  display.display(false); // Full screen update mode
  delay(5000);
  u8g2Fonts.setFont(u8g2_font_helvB14_tf);
  const char *DISPLAY_TEXT2 = "The answer is 42";
  drawString(startX, startY + 0 * distance, DISPLAY_TEXT2);
  display.display(false); // Full screen update mode
}

void loop() {
  // display.setPartialWindow(115, 50, 200, 40);
  // display.firstPage();

  // do{
  //   display.fillScreen(GxEPD_WHITE);
  //   u8g2Fonts.setCursor(120, 80);
  //   u8g2Fonts.print(millis());
  // }while(display.nextPage());
}