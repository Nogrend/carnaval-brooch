#include "NeoPixelDriver.h"

NeoPixelDriver::NeoPixelDriver(uint8_t numberOfPixels, uint8_t outputPin)
{
    Adafruit_NeoPixel pixels = Adafruit_NeoPixel(numberOfPixels, outputPin, NEO_GRB + NEO_KHZ800);

    pixels.begin();
}

NeoPixelDriver::~NeoPixelDriver()
{
}

void NeoPixelDriver::_setPanel(uint8_t symbol[])
{
    {
        uint8_t pixelColorScheme[3];
        for (uint8_t pixel = 0; pixel < 64; pixel++)
        {
            // getColorScheme(symbol[pixel], pixelColorScheme);
            _pixels.setPixelColor(pixel, _pixels.Color(pixelColorScheme[RED], pixelColorScheme[GREEN], pixelColorScheme[BLUE]));
        }
        _pixels.show();
    }
}

void NeoPixelDriver::_getColorScheme(uint8_t pixelValue, uint8_t *colorScheme)
{
    switch (pixelValue)
    {
    case 0: // OFF
        colorScheme[RED] = 0;
        colorScheme[GREEN] = 0;
        colorScheme[BLUE] = 0;
        break;
    case 1: // WHITE
        colorScheme[RED] = 30;
        colorScheme[GREEN] = 50;
        colorScheme[BLUE] = 50;
        break;
    case 2: // RED
        colorScheme[RED] = 50;
        colorScheme[GREEN] = 0;
        colorScheme[BLUE] = 0;
        break;
    case 3: // GREEN
        colorScheme[RED] = 0;
        colorScheme[GREEN] = 50;
        colorScheme[BLUE] = 0;
        break;
    default:
        delay(100);
    }
}
