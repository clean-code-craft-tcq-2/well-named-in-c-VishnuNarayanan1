#include <stdio.h>
#include <string.h>
#include <GetColourPairFromCode.h>
extern const char* MajorColourNames[];
extern const char* MinorColourNames[];
extern const int MaxColoursInMajorAndMinor;
ColourPairFromCode returnColourPairRetrievedFromCode;

ColourPairFromCode GetColourPairFromCode(int colourCode);
{
    int indexMajorColour = 0, indexMinorColour = 0;
    indexMajorColour = (colourCode / MaxColoursInMajorAndMinor);
    indexMinorColour = (colourCode % MaxColoursInMajorAndMinor);
    returnColourPairRetrievedFromCode.majorColour = &MajorColourNames[indexMajorColour];
    returnColourPairRetrievedFromCode.minorColour = &MinorColourNames[indexMinorColour];
    return returnColourPairRetrievedFromCode;
}
  
