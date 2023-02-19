#include <Arduino.h>
#include "Adafruit_NeoPixel.h"

#define RED 0
#define GREEN 1
#define BLUE 1

class NeoPixelDriver
{
private:
    Adafruit_NeoPixel _pixels;
    void _getColorScheme(uint8_t pixelValue, uint8_t *colorScheme);
    void _setPanel(uint8_t symbol[]);

public:
    NeoPixelDriver(uint8_t numberOfPixels, uint8_t outputPin);
    ~NeoPixelDriver();
};
