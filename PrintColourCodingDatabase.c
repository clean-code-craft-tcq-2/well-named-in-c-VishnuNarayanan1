#include <stdio.h>
#include "ConfigurationOfColourCodingDatabase.h"
#include "PrintColourCodingDatabase.h"

void PrintColourCodingDatabase(void)
{
    unsigned int indexMajorColours = 0;
    unsigned int indexMinorColours = 0;
    unsigned int colourCode = 1;
    printf("------- COLOUR CODING DATABASE -------\n\n");
    for(indexMajorColours = 0; indexMajorColours < MaxPossibleColoursInMajorOrMinor; indexMajorColours++)
    {
        for(indexMinorColours = 0; indexMinorColours < MaxPossibleColoursInMajorOrMinor; indexMinorColours++)
        {
             printf("------- ***** -------\n");
             printf("\n Major Colour : %s  ", MajorColourNamesString[indexMajorColours]);
             printf("\n Minor Colour : %s  ", MinorColourNamesString[indexMinorColours]);
             printf("\n Colour Code  : %d  \n", colourCode);
             printf("------- ***** -------\n");
             colourCode++;
        }
    }
}
