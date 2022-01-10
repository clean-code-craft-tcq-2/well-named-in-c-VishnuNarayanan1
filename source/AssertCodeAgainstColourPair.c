#include <stdio.h>
#include <AssertCodeAgainstColourPair.h>
#include <GetSecondaryInputFromUserForAssertion.h>
#include <ConfigurationOfColourCodingDatabase.h>

void AssertCodeAgainstColourPair(UserInputColoursAndCodes userInput)
{
  int code = (userInput.majorColourIndexOutOfUserInput * MaxPossibleColoursInMajorOrMinor) + userInput.minorColourIndexOutOfUserInput + 1
  assert(code , userInput.colourCodingOutOfUserInput);
}
