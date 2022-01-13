#include <stdio.h>
#include <assert.h>
#include "ConfigurationOfColourCodingDatabase.h"
#include "GetSecondaryInputFromUserForAssertion.h"
#include "AssertWithUserInputsCodeAgainstColourPair.h"

void AssertWithUserInputsCodeAgainstColourPair(UserInputColoursAndCodes userInput)
{
    int colourCodeAgainstColourPair = ((userInput.majorColourIndexOutOfUserInput * MaxPossibleMajorColours) + (userInput.minorColourIndexOutOfUserInput) + (1));
    assert(colourCodeAgainstColourPair == userInput.colourCodingOutOfUserInput);
}
