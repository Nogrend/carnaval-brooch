#include <Adafruit_NeoPixel.h>
#include "symbols.h"

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN 3

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 64

// colors
#define RED 0
#define GREEN 1
#define BLUE 2

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

// prototypes
void setPanel(uint8_t symbol[]);

int delayval = 10; // delay for half a second

void setup()
{
  pixels.begin(); // This initializes the NeoPixel library.
  setPanel(symbolSmiley);
  delay(2000);
}

void loop()
{
  setPanel(symbolSmiley);
  delay(1000);
  setPanel(symbolSmileyLeftEyeAlmostClosed);
  delay(100);
  setPanel(symbolSmileyLeftEyeClosed);
  delay(250);
  setPanel(symbolSmiley);
  delay(700);
  setPanel(symbolSmileyRightEyeAlmostClosed);
  delay(100);
  setPanel(symbolSmileyRightEyeClosed);
  delay(250);
  setPanel(symbolSmiley);
  delay(1000);
  setPanel(symbolSmileyMouthAlmostClosed);
  delay(100);
  setPanel(symbolSmileyMouthAlmostOpen);
  delay(100);
  setPanel(symbolSmileyMouthOpen);
  delay(1000);
  setPanel(symbolSmileyMouthOpenWithTongueOneThird);
  delay(150);
  setPanel(symbolSmileyMouthOpenWithTongueTwoThird);
  delay(150);
  setPanel(symbolSmileyMouthOpenWithTongue);
  delay(1500);
  setPanel(symbolSmileyMouthOpenWithTongueTwoThird);
  delay(150);
  setPanel(symbolSmileyMouthOpenWithTongueOneThird);
  delay(150);
  setPanel(symbolSmileyMouthOpen);
  delay(500);
  setPanel(symbolSmileyMouthAlmostOpen);
  delay(100);
  setPanel(symbolSmileyMouthAlmostClosed);
  delay(100);
}

void getColorScheme(uint8_t pixelValue, uint8_t *colorScheme)
{
  switch (pixelValue)
  {
  case 0: // OFF
    colorScheme[RED] = 0;
    colorScheme[GREEN] = 0;
    colorScheme[BLUE] = 0;
    break;
  case 1: // WHITE
    colorScheme[RED] = 15;
    colorScheme[GREEN] = 25;
    colorScheme[BLUE] = 25;
    break;
  case 2: // RED
    colorScheme[RED] = 25;
    colorScheme[GREEN] = 0;
    colorScheme[BLUE] = 0;
    break;
  case 3: // GREEN
    colorScheme[RED] = 0;
    colorScheme[GREEN] = 25;
    colorScheme[BLUE] = 0;
    break;
  default:
    delay(100);
  }
}

void setPanel(uint8_t symbol[])
{
  uint8_t pixelColorScheme[3];
  for (uint8_t pixel = 0; pixel < 64; pixel++)
  {
    getColorScheme(symbol[pixel], pixelColorScheme);
    pixels.setPixelColor(pixel, pixels.Color(pixelColorScheme[RED], pixelColorScheme[GREEN], pixelColorScheme[BLUE]));
  }
  pixels.show();
}