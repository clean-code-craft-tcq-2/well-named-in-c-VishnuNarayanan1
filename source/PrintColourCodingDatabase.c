#include <stdio.h>

const char* MajorColourNames[] = {"WHITE", "RED", "BLACK", "YELLOW", "VIOLET"};
const char* MinorColourNames[] = {"BLUE", "ORANGE", "GREEN", "BROWN", "SLATE"};
const int MaxPossibleColoursInMajorOrMinor = 5;

void PrintColourCodingDatabase(void)
{
    int indexMajorColours = 0;
    int indexMinorColours = 0;
    int colourCode = 1;
    printf("------- COLOUR CODING DATABASE -------\n\n");
    for(indexMajorColours = 0; indexMajorColours < MaxPossibleColoursInMajorOrMinor; indexMajorColours++)
    {
        for(indexMinorColours = 0; indexMinorColours < MaxPossibleColoursInMajorOrMinor; indexMinorColours++)
        {
             printf("\n Major Colour : %s  ", MajorColourNames[indexMajorColors]);
             printf("\n Minor Colour : %s  ", MinorColourNames[indexMinorColors]);
             printf("\n Colour Code  : %d  \n", colourCode);
             colourCode++;
        }
    }
}
