#include <stdio.h>
#include <CommonDataOfColourCoding.h>
#include <PrintColourCodingDatabase.h>

enum MajorColour {WHITE, RED, BLACK, YELLOW, VIOLET, MaxMajorColor};
enum MinorColour {BLUE, ORANGE, GREEN, BROWN, SLATE, MaxMinorColor};

void PrintColourCodingDatabase(void)
{
    int indexMajorColours = 0;
    int indexMinorColours = 0;
    int colourCode = 1;
    printf("------- COLOUR CODING DATABASE -------\n\n");
    for(indexMajorColours = 0; indexMajorColours < (int)MaxMajorColour; indexMajorColours++)
    {
        for(indexMinorColours = 0; indexMinorColours < (int)MaxMinorColour; indexMinorColours++)
        {
             printf("\n Major Colour : %s  ", MajorColourNames[indexMajorColors]);
             printf("\n Minor Colour : %s  ", MinorColourNames[indexMinorColors]);
             printf("\n Colour Code  : %d  \n", colourCode);
             colourCode++;
        }
    }
}
