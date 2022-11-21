#include "printcolor.h"
#include "globaldeclare.h"
#include "getters.h"
#include "converters.h"

#include <stdio.h>

void PrintManual(void)
{
  ColorPair_t ManualColourPrint;
  char i8ColourBuffer[15];
  int i32UserResult;
  printf("Manual for Colour Reference \n");
  printf("Major Minor Number \n");
  for(int i32MajorIndex = 0; i32MajorIndex < 5; i32MajorIndex++)
  {
    for(int i32MinorIndex =0 ; i32MinorIndex < 5; i32MinorIndex++)
    {
      ManualColourPrint.enMajorColor = i32MajorIndex ; ManualColourPrint.enMinorColor = i32MinorIndex;
      ColorPairToString(&ManualColourPrint,i8ColourBuffer);
      i32UserResult = GetPairNumberFromColor(&ManualColourPrint);
      printf("%s %d \n",i8ColourBuffer,i32UserResult);
    }
  }
}
