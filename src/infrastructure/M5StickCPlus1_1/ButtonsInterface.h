#ifdef M5STICKCPLUS1_1

#pragma once

#include <memory>
#include "utility/Button.h"

#include "../../domain/entities/ButtonsInterfaceBase.h"

#define BUTTON_NEXT_PIN 39
#define BUTTON_SELECT_PIN 37
#define DEBOUNCE_MS 10

#ifdef __cplusplus
extern "C"
{
#endif
    namespace Infrastructure::M5StickCPlus1_1
    {
        class ButtonsInterface : public Domain::Entities::ButtonsInterfaceBase
        {
        public:
            ButtonsInterface();
            void begin();
            void loop();

        private:
            Button _buttonNext = Button(BUTTON_NEXT_PIN, true, DEBOUNCE_MS);
            Button _buttonSelect = Button(BUTTON_SELECT_PIN, true, DEBOUNCE_MS);
        };
    }
#ifdef __cplusplus
}
#endif
#endif