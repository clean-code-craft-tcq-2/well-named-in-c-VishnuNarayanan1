#include <stdio.h>
#include <assert.h>
#include "ConfigurationOfColourCodingDatabase.h"
#include "GetSecondaryInputFromUserForAssertion.h"
#include "AssertColourPairAgainstCode.h"

void AssertColourPairAgainstCode(UserInputColoursAndCodes userInput)
{
  userInput.colourCodingOutOfUserInput = userInput.colourCodingOutOfUserInput - 1;
  int majorColourIndex = (userInput.colourCodingOutOfUserInput / MaxPossibleColoursInMajorOrMinor);
  int minorColourIndex = (userInput.colourCodingOutOfUserInput % MaxPossibleColoursInMajorOrMinor);  
  printf("Major colour Index %d \n" , majorColourIndex);
  printf("Minor colour Index %d \n" , minorColourIndex);
  printf("Colour Index %d \n" , userInput.colourCodingOutOfUserInput);
    printf("Major colour Index %d \n" , userInput.majorColourIndexOutOfUserInput);
  printf("Minor colour Index %d \n" , userInput.minorColourIndexOutOfUserInput);
  
  //assert(MajorColourNamesString[majorColourIndex] == MajorColourNamesString[userInput.majorColourIndexOutOfUserInput]);
  //assert(MajorColourNamesString[minorColourIndex] == MinorColourNamesString[userInput.minorColourIndexOutOfUserInput]);
}
