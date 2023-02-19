#include <Arduino.h>
#include "NeoPixelDriver.h"
#include "Eye.h"
#include "symbols.h"

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN 3

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 64

// prototypes
// void setPanel(uint8_t symbol[]);


NeoPixelDriver neoPixels = NeoPixelDriver(NUMPIXELS, PIN);
Eye rightEye(neoPixels, 0, 0);
// Eye leftEye(neoPixels);

void setup()
{
  // pixels.begin(); // This initializes the NeoPixel library.
  // setPanel(symbolSmiley);
}

void loop()
{
}

