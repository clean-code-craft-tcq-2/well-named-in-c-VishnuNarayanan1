#include <stdio.h>
#include "GetSecondaryInputFromUserForAssertion.h"
#include "ValidatePrimaryUserInputForAssertion.h"
#include "AssertWithUserInputsCodeAgainstColourPair.h"
#include "AssertWithUserInputsColourPairAgainstCode.h" 

void ValidatePrimaryUserInputForAssertion(char userInputForAssertion)
{
  UserInputColoursAndCodes retrievedUserInput;
  retrievedUserInput = GetSecondaryInputFromUserForAssertion();
  if((retrievedUserInput.inputMatchSuccessStatus == 1) && (userInputForAssertion == 2))
  {
      AssertWithUserInputsCodeAgainstColourPair(retrievedUserInput);
  }
  else if((retrievedUserInput.inputMatchSuccessStatus == 1) && (userInputForAssertion == 3))
  {
      AssertWithUserInputsColourPairAgainstCode(retrievedUserInput);
  }
  else
  {
      // Do nothing
  }
}
