#ifdef M5CARDPUTER

#include "ButtonsInterface.h"

using namespace Infrastructure::M5Cardputer;

ButtonsInterface::ButtonsInterface() : ButtonsInterfaceBase()
{
}

void ButtonsInterface::begin()
{
}

void ButtonsInterface::loop()
{
    // this->_buttonNext.read();
    // this->_buttonSelect.read();

    // if (this->_buttonNext.isPressed())
    //     this->_onClickNext.fireEvent();

    // if (this->_buttonSelect.isPressed())
    //     this->_onClickSelect.fireEvent();
}

#endif