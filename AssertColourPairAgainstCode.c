#include <stdio.h>
#include <AssertColourPairAgainstCode.h>
#include <GetSecondaryInputFromUserForAssertion.h>
#include <ConfigurationOfColourCodingDatabase.h>

void AssertColourPairAgainstCode(UserInputColoursAndCodes userInput)
{
  int majorColourIndex = (userInput.colourCodingOutOfUserInput / MaxPossibleColoursInMajorOrMinor);
  int minorColourIndex = (userInput.colourCodingOutOfUserInput % MaxPossibleColoursInMajorOrMinor);
  assert(MajorColourNamesString[majorColourIndex] , MajorColourNamesString[userInput.majorColourIndexOutOfUserInput]);
  assert(MajorColourNamesString[minorColourIndex] , MinorColourNamesString[userInput.minorColourIndexOutOfUserInput]);
}
