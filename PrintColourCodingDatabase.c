#include <stdio.h>
#include "ConfigurationOfColourCodingDatabase.h"
#include "PrintColourCodingDatabase.h"
int Assert_Print_ColourCode_DataBase = 0;
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
    if((indexMajorColours == 5) && (indexMinorColours == 5))
    {
        SuccessStatusOfPrintColourCodingDatabase();
    }
}
