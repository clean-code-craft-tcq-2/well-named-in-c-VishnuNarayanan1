#include <stdio.h>
#include <ValidateTypeOfAssertion.h>

// Refer source/main.c for the possible userInputs / type of assertions available
void ValidateTypeOfAssertion(char userInput)
{
  if(userInput == '2')
  {
      AssertCodeToColourPair();
  }
  else
  {
      AssertColoursToCode();
  }
}
