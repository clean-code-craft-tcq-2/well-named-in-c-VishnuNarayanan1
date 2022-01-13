#include <stdio.h>
#include <assert.h>
#include "AssertPrintColourCodingDatabase.h"
#include "StatusOfPrintColourCodingDatabase.h"
  
void AssertPrintColourCodingDatabase(void)
{
  int statusOfPrintColourCode = 0;
  statusOfPrintColourCode = ReturnStatusOfPrintColourCodingDatabase();
  printf("\n Assert %d", statusOfPrintColourCode);
  //assert(statusOfPrintColourCode == 0x54);
  ResetStatusOfPrintColourCodingDatabase();
}

