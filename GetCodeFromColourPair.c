#include <stdio.h>
#include <string.h>
#include <GetCodeFromColourPair.h>

extern const char* MajorColourNames[];
extern const char* MinorColourNames[];
extern const int MaxMajorColours;
extern const int MaxMinorColours;

int GetCodeFromColourPair(char *inputMajorColour, char *inputMinorColour);
{
    int colourCode = 0, indexMajorColours = 0, indexMinorColours = 0, colourCode = 0, matchMajorColourWithInput = 0, matchMinorColourWithInput = 0;
    for(indexMajorColours = 0; indexMajorColours < MaxMajorColours; indexMajorColours++)
    {
        for(indexMinorColours = 0; indexMinorColours < MaxMinorColours; indexMinorColours++)
        {
            matchMajorColourWithInput = strcmp(inputMajorColour , MajorColourNames[indexMajorColours]);
            matchMinorColourWithInput = strcmp(inputMinorColour , MinorColourNames[indexMinorColours]);
            if((matchMajorColourWithInput == 0) && (matchMinorColourWithInput == 0))
            {
               colourCode = ((indexMajorColours * MaxMajorColours) + (indexMinorColours + 1));
            }
        }
      return colourCode;
}
