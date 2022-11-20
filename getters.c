#include "globaldeclare.h"
#include "getters.h"

ColorPair_t GetColorFromPairNumber(int f_i32PairNumber)
{
    ColorPair_t ColorPair;
    int i32ZeroBasedPairNumber = f_i32PairNumber - 1;
    ColorPair.enMajorColor = \
        (enum enumMajorColor)(i32ZeroBasedPairNumber / numberOfMinorColors);
    ColorPair.enMinorColor = \
        (enum enumMinorColor)(i32ZeroBasedPairNumber % numberOfMinorColors);
    return ColorPair;
}

int GetPairNumberFromColor(const ColorPair_t* f_ColorPair) 
{
    return (( f_ColorPair->enMajorColor * numberOfMinorColors )+
           ( f_ColorPair->enMinorColor ) + 1 );
}
