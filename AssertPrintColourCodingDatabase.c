#include <stdio.h>
#include <assert.h>
#include "AssertPrintColourCodingDatabase.h"
#include "StatusOfPrintColourCodingDatabase.h"
  
void AssertPrintColourCodingDatabase(void)
{
  int statusOfPrintColourCode = 0;
  statusOfPrintColourCode = ReturnStatusOfPrintColourCodingDatabase();
  assert(statusOfPrintColourCode == 0x54);
  ResetStatusOfPrintColourCodingDatabase();
}

