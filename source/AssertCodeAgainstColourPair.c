#include <stdio.h>
#include <assert.h>
#include "includes/GetSecondaryInputFromUserForAssertion.h"
#include "includes/ConfigurationOfColourCodingDatabase.h"
#include "includes/AssertCodeAgainstColourPair.h"

void AssertCodeAgainstColourPair(UserInputColoursAndCodes userInput)
{
    int colourCodeAgainstColourPair = ((userInput.majorColourIndexOutOfUserInput * MaxPossibleColoursInMajorOrMinor) + (userInput.minorColourIndexOutOfUserInput) + (1));
    assert(colourCodeAgainstColourPair == userInput.colourCodingOutOfUserInput);
}
