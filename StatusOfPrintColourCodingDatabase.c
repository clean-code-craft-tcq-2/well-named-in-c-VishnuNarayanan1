#include <stdio.h>
include "StatusOfPrintColourCodingDatabase.h"

int Status_Print_ColourCode_DataBase = 0;

void SuccessStatusOfPrintColourCodingDatabase(void)
{
  Status_Print_ColourCode_DataBase = 0x5A;
}

int ReturnStatusOfPrintColourCodingDatabase(void)
{
  return Status_Print_ColourCode_DataBase;
}

void ResetStatusOfPrintColourCodingDatabase(void)
{
  Status_Print_ColourCode_DataBase = 0;
}
