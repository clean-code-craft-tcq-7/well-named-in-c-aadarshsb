#include "globaldeclare.h"
#include "testers.h"
#include <assert.h>
#include <stdio.h>

void testNumberToPair( \
  int f_i32PairNumber, \
  enum enumMajorColor f_enExpectedMajor, \
  enum enumMinorColor f_enExpectedMinor )
{
    ColorPair_t ColorPair = GetColorFromPairNumber(f_i32PairNumber);
    char i8ColorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&ColorPair, i8ColorPairNames);
    printf("Got pair %s\n", i8ColorPairNames);
    assert(ColorPair.enMajorColor == f_enExpectedMajor);
    assert(ColorPair.enMinorColor == f_enExpectedMinor);
}

void testPairToNumber( \
  enum enumMajorColor f_enMajorColour, \
  enum enumMinorColor f_enMinorColour, \
  int f_i32ExpectedPairNumber )
{
    ColorPair_t ColorPair;
    ColorPair.enMajorColor = f_enMajorColour;
    ColorPair.enMinorColor = f_enMinorColour;
    int i32PairNumber = GetPairNumberFromColor(&ColorPair);
    printf("Got pair number %d\n", i32PairNumber);
    assert(i32PairNumber == f_i32ExpectedPairNumber);
}
