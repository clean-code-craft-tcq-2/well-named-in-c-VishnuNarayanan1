#include <stdio.h>
#include "StatusOfPrintColourCodingDatabase.h"

int StatusPrintColourCodingDatabase = 0;

void SuccessStatusOfPrintColourCodingDatabase(void)
{
  StatusPrintColourCodingDatabase = 0x5A;
}

int ReturnStatusOfPrintColourCodingDatabase(void)
{
  return StatusPrintColourCodingDatabase;
}

void ResetStatusOfPrintColourCodingDatabase(void)
{
  StatusPrintColourCodingDatabase = 0;
}
