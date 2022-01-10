#include <stdio.h>
#include <assert.h>
#include "includes/ConfigurationOfColourCodingDatabase.h"
#include "includes/GetSecondaryInputFromUserForAssertion.h"
#include "includes/AssertColourPairAgainstCode.h"

void AssertColourPairAgainstCode(UserInputColoursAndCodes userInput)
{
  int majorColourIndex = (userInput.colourCodingOutOfUserInput / MaxPossibleColoursInMajorOrMinor);
  int minorColourIndex = (userInput.colourCodingOutOfUserInput % MaxPossibleColoursInMajorOrMinor);
  assert(MajorColourNamesString[majorColourIndex] == MajorColourNamesString[userInput.majorColourIndexOutOfUserInput]);
  assert(MajorColourNamesString[minorColourIndex] == MinorColourNamesString[userInput.minorColourIndexOutOfUserInput]);
}
