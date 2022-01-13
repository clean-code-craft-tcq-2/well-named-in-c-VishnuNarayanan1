#include <stdio.h>
#include <assert.h>
#include "ConfigurationOfColourCodingDatabase.h"
#include "GetSecondaryInputFromUserForAssertion.h"
#include "AssertWithUserInputsColourPairAgainstCode.h"

void AssertWithUserInputsColourPairAgainstCode(UserInputColoursAndCodes userInput)
{
  userInput.colourCodingOutOfUserInput = userInput.colourCodingOutOfUserInput - 1;
  int majorColourIndex = (userInput.colourCodingOutOfUserInput / MaxPossibleMajorColours);
  int minorColourIndex = (userInput.colourCodingOutOfUserInput % MaxPossibleMinorColours);    
  assert(MajorColourNamesString[majorColourIndex] == MajorColourNamesString[userInput.majorColourIndexOutOfUserInput]);
  assert(MinorColourNamesString[minorColourIndex] == MinorColourNamesString[userInput.minorColourIndexOutOfUserInput]);
}
