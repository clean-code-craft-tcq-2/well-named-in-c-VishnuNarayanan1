#include <stdio.h>
#include "StatusOfPrintColourCodingDatabase.h"

int StatusPrintColourCodingDatabase = 0;

void SuccessStatusOfPrintColourCodingDatabase(void)
{
  printf("\n Success1 %d", StatusPrintColourCodingDatabase);
  StatusPrintColourCodingDatabase = 0x54;
  printf("\n Success2 %d", StatusPrintColourCodingDatabase);
}

int ReturnStatusOfPrintColourCodingDatabase(void)
{
  printf("\n Return1 %d", StatusPrintColourCodingDatabase);
  return StatusPrintColourCodingDatabase;
  printf("\n Return2 %d", StatusPrintColourCodingDatabase);
}

void ResetStatusOfPrintColourCodingDatabase(void)
{
  printf("\n Reset1 %d", StatusPrintColourCodingDatabase);
  StatusPrintColourCodingDatabase = 0;
  printf("\n Reset2 %d", StatusPrintColourCodingDatabase);
}
