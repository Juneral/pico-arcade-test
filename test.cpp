#include "pxt.h"

namespace elfshield {
    /*
    **Single LED module V1.0.
    */
    //%
    void singleLEDSet(uint8_t isOn)
    {
        auto p = LOOKUP_PIN(P_8);
        rstp->setDigitalValue(isOn);
        
    }

}