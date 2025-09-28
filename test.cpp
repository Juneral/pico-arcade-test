#include "pxt.h"

namespace elfshield {
    /*
    **Single LED module V1.0.
    */
    //%
    void singleLEDSet(uint8_t isOn)
    {
        auto p = LOOKUP_PIN(PIN_JACK_SND);
        p->setDigitalValue(isOn);
        
    }


}

