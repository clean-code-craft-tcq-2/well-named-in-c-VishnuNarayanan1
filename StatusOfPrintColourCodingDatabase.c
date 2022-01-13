#include <stdio.h>
#include "StatusOfPrintColourCodingDatabase.h"

int StatusPrintColourCodingDatabase = 0;

void SuccessStatusOfPrintColourCodingDatabase(void)
{
  printf("\n Success %d", &StatusPrintColourCodingDatabase);
  StatusPrintColourCodingDatabase = 0x5A;
}

int ReturnStatusOfPrintColourCodingDatabase(void)
{
  printf("\n Return %d", &StatusPrintColourCodingDatabase);
  return StatusPrintColourCodingDatabase;
}

void ResetStatusOfPrintColourCodingDatabase(void)
{
  StatusPrintColourCodingDatabase = 0;
  printf("\n Reset %d", &StatusPrintColourCodingDatabase);
}
