#include <stdio.h>

const char* MajorColourNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColourNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
const int MaxMajorColours = 5;
const int MaxMinorColours = 5;

void PrintColourCodingDatabase(void)
{
    int indexMajorColours = 0;
    int indexMinorColours = 0;
    int colourCode = 1;
    printf("------- COLOUR CODING DATABASE -------\n\n");
    for(indexMajorColours = 0; indexMajorColours < MaxMajorColours; indexMajorColours++)
    {
        for(indexMinorColours = 0; indexMinorColours < MaxMinorColours; indexMinorColours++)
        {
             printf("\n Major Colour : %s  ", MajorColourNames[indexMajorColors]);
             printf("\n Minor Colour : %s  ", MinorColourNames[indexMinorColors]);
             printf("\n Colour Code  : %d  \n", colourCode);
             colourCode++;
        }
    }
}
