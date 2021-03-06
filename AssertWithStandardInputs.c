#include <stdio.h>
#include "ConfigurationOfColourCodingDatabase.h"
#include "AssertWithStandardInputs.h"
#include "GetSecondaryInputFromUserForAssertion.h"
#include "AssertWithUserInputsCodeAgainstColourPair.h"
#include "AssertWithUserInputsColourPairAgainstCode.h"
#include "AssertPrintColourCodingDatabase.h"

void AssertWithStandardInputs(void)
{
        UserInputColoursAndCodes userInput;
        AssertPrintColourCodingDatabase();
        userInput.majorColourIndexOutOfUserInput  = WHITE;
        userInput.minorColourIndexOutOfUserInput  = BROWN;
        userInput.colourCodingOutOfUserInput  = 4;
        AssertWithUserInputsCodeAgainstColourPair(userInput);
        userInput.majorColourIndexOutOfUserInput  = WHITE;
        userInput.minorColourIndexOutOfUserInput  = SLATE;
        userInput.colourCodingOutOfUserInput  = 5;
        AssertWithUserInputsCodeAgainstColourPair(userInput);
        userInput.majorColourIndexOutOfUserInput  = BLACK;
        userInput.minorColourIndexOutOfUserInput  = ORANGE;
        userInput.colourCodingOutOfUserInput  = 12;
        AssertWithUserInputsColourPairAgainstCode(userInput);
        userInput.majorColourIndexOutOfUserInput  = VIOLET;
        userInput.minorColourIndexOutOfUserInput  = SLATE;
        userInput.colourCodingOutOfUserInput  = 25;
        AssertWithUserInputsColourPairAgainstCode(userInput);
        printf("\n\n------- ***** -------\n");
        printf("ASSERTION BASED ON STANDARD INPUTS SUCCESS\n");
        printf("------- ***** -------\n");  
 }
