#include <stdio.h>
#include "ConfigurationOfColourCodingDatabase.h"

const char* MajorColorNamesString[] = {"WHITE", "RED", "BLACK", "YELLOW", "VIOLET"};
const char* MinorColorNamesString[] = {"BLUE", "ORANGE", "GREEN", "BROWN", "SLATE"};

ColourCodingDatabase ColourCodingDatabaseDetails_struct [MaxPossibleColoursInMajorOrMinor] =
{
    {WHITE , BLUE},
    {RED , ORANGE},
    {BLACK , GREEN},
    {YELLOW , BROWN},
    {VIOLET , SLATE},
}
