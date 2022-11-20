#include "converters.h"
#include "globaldeclare.h"


const char* gc_pi8arrMajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* gc_pi8arrMinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

void ColorPairToString(const ColorPair_t* f_ColorPair, char* f_pi8Buffer) {
    sprintf(f_pi8Buffer, "%s %s", \
            gc_pi8arrMajorColorNames[f_ColorPair->enMajorColor], \
            gc_pi8arrMinorColorNames[f_ColorPair->enMinorColor]);
}
