#include "pxt.h"

namespace elfshield {
    /*
    **Single LED module V1.0.
    */
//% block="digital write|pin %name|to %value=toggleHighLow"
void digitalWrite(DigitalInOutPin name, bool value) {
    PINOP(setDigitalValue(value));
}


}



