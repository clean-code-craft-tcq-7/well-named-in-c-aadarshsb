#include "globaldeclare.h"
#include "getters.h"

extern int g_i32NumberOfMinorColors;

ColorPair_t GetColorFromPairNumber(int f_i32PairNumber)
{
    ColorPair_t ColorPair;
    int i32ZeroBasedPairNumber = f_i32PairNumber - 1;
    ColorPair.enMajorColor = \
        (enum enumMajorColor)(i32ZeroBasedPairNumber / g_i32NumberOfMinorColors);
    ColorPair.enMinorColor = \
        (enum enumMinorColor)(i32ZeroBasedPairNumber % g_i32NumberOfMinorColors);
    return ColorPair;
}

int GetPairNumberFromColor(const ColorPair_t* f_ColorPair) 
{
    return (( f_ColorPair->enMajorColor * g_i32NumberOfMinorColors ) +
           ( f_ColorPair->enMinorColor ) + 1 );
}
