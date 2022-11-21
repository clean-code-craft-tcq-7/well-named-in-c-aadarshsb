#include <stdio.h>
#include "globaldeclare.h"
#include "testers.h"
#include "printcolor.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    PrintNumberFromColour();

    return 0;
}
