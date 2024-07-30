// This is program for blinking LED for thinkerkit wifi bot

#include <Adafruit_NeoPixel.h>
 Adafruit_NeoPixel pixels = Adafruit_NeoPixel(5, 4, NEO_GRB + NEO_KHZ800);


void setup() {
  pixels.begin();

}

void loop() {
  pixels.setPixelColor(0, 0xff0000);
  pixels.setPixelColor(1, 0x000000);
  pixels.setPixelColor(2, 0x000000);
  pixels.setPixelColor(3, 0x000000);
  pixels.setPixelColor(4, 0x000000);
  pixels.show();
  pixels.show();
  delay(2000);
  pixels.setPixelColor(0, 0x000000);
  pixels.setPixelColor(1, 0xff0000);
  pixels.setPixelColor(2, 0x000000);
  pixels.setPixelColor(3, 0x000000);
  pixels.setPixelColor(4, 0x000000);
  pixels.show();
  pixels.show();
  delay(2000);
  pixels.setPixelColor(0, 0x000000);
  pixels.setPixelColor(1, 0x000000);
  pixels.setPixelColor(2, 0xff0000);
  pixels.setPixelColor(3, 0x000000);
  pixels.setPixelColor(4, 0x000000);
  pixels.show();
  pixels.show();
  delay(2000);
  pixels.setPixelColor(0, 0x000000);
  pixels.setPixelColor(1, 0x000000);
  pixels.setPixelColor(2, 0x000000);
  pixels.setPixelColor(3, 0xff0000);
  pixels.setPixelColor(4, 0x000000);
  pixels.show();
  pixels.show();
  delay(2000);
  pixels.setPixelColor(0, 0x000000);
  pixels.setPixelColor(1, 0x000000);
  pixels.setPixelColor(2, 0x000000);
  pixels.setPixelColor(3, 0x000000);
  pixels.setPixelColor(4, 0xff0000);
  pixels.show();
  pixels.show();
  delay(2000);

}