#include "pxt.h"

namespace elfshield {
    /*
    **Single LED module V1.0.
    */
//%
void singleLEDSet(DigitalInOutPin name, bool value) {
    PINOP(setDigitalValue(value));
}


}





