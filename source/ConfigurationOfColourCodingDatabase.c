#include <stdio.h>
#include <ConfigurationOfColourCodingDatabase.h>

const char* MajorColorNamesString[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNamesString[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

ColourCodingDatabase ColourCodingDatabaseDetails_struct [MaxPossibleColoursInMajorOrMinor] =
{
    {WHITE , BLUE},
    {RED , ORANGE},
    {BLACK , GREEN},
    {YELLOW , BROWN}
    {VIOLET , SLATE},
}
