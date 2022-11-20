#include "converters.h"
#include "globaldeclare.h"

void ColorPairToString(const ColorPair_t* f_ColorPair, char* f_pi8Buffer) {
    sprintf(f_pi8Buffer, "%s %s", \
            MajorColorNames[f_ColorPair->enMajorColor], \
            MinorColorNames[f_ColorPair->enMinorColor]);
}
