#include <stdio.h>
#include <ConfigurationOfColourCodingDatabase.h>
extern ColourCodingDatabase ColourCodingDatabaseDetails_struct [MaxPossibleColoursInMajorOrMinor];

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
             printf("\n Major Colour : %s  ", ColourCodingDatabaseDetails_struct[indexMajorColors].MajorColourNamesString);
             printf("\n Minor Colour : %s  ", ColourCodingDatabaseDetails_struct[indexMinorColors].MinorColourNamesString);
             printf("\n Colour Code  : %d  \n", colourCode);
             colourCode++;
        }
    }
}
