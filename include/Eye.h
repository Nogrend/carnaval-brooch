#include <Arduino.h>
#include "NeoPixelDriver.h"

class Eye
{
private:
    NeoPixelDriver &_neoPixels;
    uint8_t _xPosition = 0;
    uint8_t _yPosition = 0;

public:
    Eye(NeoPixelDriver &neoPixels, uint8_t xPosition, uint8_t yPosition);
    ~Eye();

    void setEye();
};
