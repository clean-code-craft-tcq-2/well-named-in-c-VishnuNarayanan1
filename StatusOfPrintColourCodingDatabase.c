#include <stdio.h>
#include "StatusOfPrintColourCodingDatabase.h"

static int StatusPrintColourCodingDatabase = 0;

void SuccessStatusOfPrintColourCodingDatabase(void)
{
  StatusPrintColourCodingDatabase = 0x54;
}

int ReturnStatusOfPrintColourCodingDatabase(void)
{
  return StatusPrintColourCodingDatabase;
}

void ResetStatusOfPrintColourCodingDatabase(void)
{
  StatusPrintColourCodingDatabase = 0;
}
