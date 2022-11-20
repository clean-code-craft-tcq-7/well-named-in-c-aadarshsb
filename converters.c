#include <stdio.h>
#include "converters.h"
#include "globaldeclare.h"

const char* gc_pi8arrMajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* gc_pi8arrMinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int g_i32NumberOfMajorColors =
    sizeof(gc_pi8arrMajorColorNames) / sizeof(gc_pi8arrMajorColorNames[0]);

int g_i32NumberOfMinorColors =
    sizeof(gc_pi8arrMinorColorNames) / sizeof(gc_pi8arrMinorColorNames[0]);

void ColorPairToString(const ColorPair_t* f_ColorPair, char* f_pi8Buffer) {
    sprintf(f_pi8Buffer, "%s %s", \
            gc_pi8arrMajorColorNames[f_ColorPair->enMajorColor], \
            gc_pi8arrMinorColorNames[f_ColorPair->enMinorColor]);
}
