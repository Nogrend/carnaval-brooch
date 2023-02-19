#include "Eye.h"

Eye::Eye(NeoPixelDriver &neoPixels, uint8_t xPosition, uint8_t yPosition) : _neoPixels(neoPixels), _xPosition(xPosition), _yPosition(yPosition)
{
    this->_xPosition = xPosition;
    this->_yPosition = yPosition;
}

Eye::~Eye()
{
}

void Eye::setEye()
{
    
}
