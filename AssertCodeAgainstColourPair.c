#include <stdio.h>
#include <GetSecondaryInputFromUserForAssertion.h>
#include <ConfigurationOfColourCodingDatabase.h>
#include <AssertCodeAgainstColourPair.h>

void AssertCodeAgainstColourPair(UserInputColoursAndCodes userInput)
{
  int colourCodeAgainstColourPair = (userInput.majorColourIndexOutOfUserInput * MaxPossibleColoursInMajorOrMinor) + userInput.minorColourIndexOutOfUserInput + 1
  assert(colourCodeAgainstColourPair == userInput.colourCodingOutOfUserInput);
}
