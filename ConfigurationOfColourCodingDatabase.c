#include <stdio.h>
#include "ConfigurationOfColourCodingDatabase.h"

const char* MajorColourNamesString[] = {"WHITE", "RED", "BLACK", "YELLOW", "VIOLET"};
const char* MinorColourNamesString[] = {"BLUE", "ORANGE", "GREEN", "BROWN", "SLATE"};

ColourCodingDatabase ColourCodingDatabaseDetails_struct [MaxPossibleColoursInMajorOrMinor] =
{
    {WHITE , BLUE},
    {RED , ORANGE},
    {BLACK , GREEN},
    {YELLOW , BROWN},
    {VIOLET , SLATE},
};

enum OperationType OperationTypeConfigured_Enum = PerformStandardOperations;
