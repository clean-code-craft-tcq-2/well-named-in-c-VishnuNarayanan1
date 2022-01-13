#include <stdio.h>
#include "ConfigurationOfColourCodingDatabase.h"
#include "PrintColourCodingDatabase.h"
#include "StatusOfPrintColourCodingDatabase.h"

void PrintColourCodingDatabase(void)
{
    unsigned int indexMajorColours = 0;
    unsigned int indexMinorColours = 0;
    unsigned int colourCode = 1;
    printf("------- COLOUR CODING DATABASE -------\n\n");
    for(indexMajorColours = 0; indexMajorColours < MaxPossibleMajorColours; indexMajorColours++)
    {
        for(indexMinorColours = 0; indexMinorColours < MaxPossibleMinorColours; indexMinorColours++)
        {
             printf("\n------- ***** -------");
             printf("\n Major Colour : %s  ", MajorColourNamesString[indexMajorColours]);
             printf("\n Minor Colour : %s  ", MinorColourNamesString[indexMinorColours]);
             printf("\n Colour Code  : %d  ", colourCode);
             printf("\n------- ***** -------\n");
             colourCode++;
        }
    }

    if((indexMajorColours == MaxPossibleMajorColours) && (indexMinorColours == MaxPossibleMinorColours))
    {
        SuccessStatusOfPrintColourCodingDatabase();
    }
}
