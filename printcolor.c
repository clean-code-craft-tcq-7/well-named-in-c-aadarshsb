#include "printcolor.h"
#include "globaldeclare.h"
#include <stdio.h>

void PrintNumberFromColour(void)
{
  unsigned int ui32VaildateMajorColor, ui32ValidateMinorColor;
  unsigned int ui32UserRequest;
  while(ui32UserRequest != 2)
  {
    printf("Welcome, Please choose the following number and press Enter \n 1 - Convert Colour Code to Number \n 2 - Exit the Program \n");
    scanf("%u",&ui32UserRequest);
    if(ui32UserRequest < 1 && ui32UserRequest > 2)
    {
      printf("Invaild selection!, Please try again \n");
    }
    else if(ui32UserRequest == 1)
    {
      printf("Choose the Major Colour \n  1-White, 2- Red, 3-Black, 4-Yellow, 5-Violet \n");
      scanf("%u",&ui32VaildateMajorColor);
      printf("Choose the Major Colour \n  1-Black, 2- Orange, 3-Green, 4-Brown, 5-Stale \n");
      scanf("%u",&ui32ValidateMinorColor);
      if(ui32VaildateMajorColor < 1 && ui32VaildateMajorColor > 5)
      {
        printf("Invalid Major Number, Try again!\n");
      }
      else if(ui32ValidateMinorColor < 1 && ui32ValidateMinorColor > 5)
      {
        printf("Invalid Minor Number, Try again!\n");
      }
      else
      {
        ColorPair_t UserColorPair; UserColorPair.enMajorColor = ui32VaildateMajorColor; UserColorPair.enMinorColor = ui32ValidateMinorColor;
        printf("The Number for the corresponding Colour combination is %d \n",GetPairNumberFromColor(&UserColorPair));
        break;
      }
    }
    else
      break;
  }
}
