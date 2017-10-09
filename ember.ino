#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 2

//Adafruit_NeoPixel strip = Adafruit_NeoPixel(140, PIN, NEO_GRB + NEO_KHZ800);

Adafruit_NeoPixel strip = Adafruit_NeoPixel(140, PIN, NEO_GRB + NEO_KHZ800);
// 0-99 leg
// 100-140 foot

uint32_t color;

void setup() {
  strip.begin();
  strip.setBrightness(60);
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  for(int i=139; i >= 0; i--){
    color = strip.Color(random(245,255), random(0, 25), 0);
    strip.setPixelColor(i, color);
  }
  strip.show();
  delay(500);
}
