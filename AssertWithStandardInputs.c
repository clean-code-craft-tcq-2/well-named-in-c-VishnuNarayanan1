#include <stdio.h>
#include "ConfigurationOfColourCodingDatabase.h"
#include "AssertWithStandardInputs.h"
#include "GetSecondaryInputFromUserForAssertion.h"
#include "AssertCodeAgainstColourPair.h"
#include "AssertColourPairAgainstCode.h"

void AssertWithStandardInputs(void)
{
        UserInputColoursAndCodes userInput;
        userInput.majorColourIndexOutOfUserInput  = WHITE;
        userInput.minorColourIndexOutOfUserInput  = BROWN;
        userInput.colourCodingOutOfUserInput  = 4;
        AssertCodeAgainstColourPair(userInput);
        userInput.minorColourIndexOutOfUserInput  = WHITE;
        userInput.colourCodingOutOfUserInput  = 5;
        AssertCodeAgainstColourPair(userInput);
        userInput.majorColourIndexOutOfUserInput  = BLACK;
        userInput.minorColourIndexOutOfUserInput  = ORANGE;
        userInput.colourCodingOutOfUserInput  = 12;
        AssertColourPairAgainstCode(userInput);
        userInput.majorColourIndexOutOfUserInput  = VIOLET;
        userInput.minorColourIndexOutOfUserInput  = SLATE;
        userInput.colourCodingOutOfUserInput  = 25;
        AssertColourPairAgainstCode(userInput);
 }
