#include <stdio.h>
#include <string.h>
#include "GetSecondaryInputFromUserForAssertion.h"
#include "ValidatePrimaryUserInputForAssertion.h"
#include "AssertWithUserInputsCodeAgainstColourPair.h"
#include "AssertWithUserInputsColourPairAgainstCode.h" 

void ValidatePrimaryUserInputForAssertion(char userInputForAssertion[])
{
  UserInputColoursAndCodes retrievedUserInput;
  retrievedUserInput = GetSecondaryInputFromUserForAssertion();
  if((retrievedUserInput.inputMatchSuccessStatus == 1) && ((strcmp(userInputForAssertion, "GET_CODE_AGAINST_COLOURPAIR") == 0)))
  {
      AssertWithUserInputsCodeAgainstColourPair(retrievedUserInput);
  }
  else if((retrievedUserInput.inputMatchSuccessStatus == 1) && ((strcmp(userInputForAssertion, "GET_COLOURPAIR_AGAINST_CODE") == 0)))
  {
      AssertWithUserInputsColourPairAgainstCode(retrievedUserInput);
  }
  else
  {
      // Do nothing
  }
}
