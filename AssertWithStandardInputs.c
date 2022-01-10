#include <stdio.h>
#include "ConfigurationOfColourCodingDatabase.h"
#include "AssertWithStandardInputs.h"
#include "GetSecondaryInputFromUserForAssertion.h"
#include "AssertCodeAgainstColourPair.h"

void AssertWithStandardInputs(void)
{
        UserInputColoursAndCodes userInput;
        userInput.majorColourIndexOutOfUserInput  = WHITE;
        userInput.minorColourIndexOutOfUserInput  = BROWN;
        userInput.colourCodingOutOfUserInput  = 4;
        AssertCodeAgainstColourPair(userInput);
 }
