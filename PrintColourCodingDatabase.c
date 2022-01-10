#include <stdio.h>
#include <ConfigurationOfColourCodingDatabase.h>

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
             printf("\n Major Colour : %s  ", MajorColorNamesString[indexMajorColours]);
             printf("\n Minor Colour : %s  ", MinorColorNamesString[indexMinorColours]);
             printf("\n Colour Code  : %d  \n", colourCode);
             colourCode++;
        }
    }
}
