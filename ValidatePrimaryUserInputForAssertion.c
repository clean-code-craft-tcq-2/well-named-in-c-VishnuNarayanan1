#include <stdio.h>
#include "GetSecondaryInputFromUserForAssertion.h"
#include "ValidatePrimaryUserInputForAssertion.h"

void ValidatePrimaryUserInputForAssertion(char userInputForAssertion)
{
  UserInputColoursAndCodes retrievedUserInput;
  retrievedUserInput = GetSecondaryInputFromUserForAssertion();
  if((retrievedUserInput.inputMatchSuccessStatus == 1) && (userInputForAssertion == 2))
  {
      AssertCodeAgainstColourPair(retrievedUserInput);
  }
  else if((retrievedUserInput.inputMatchSuccessStatus == 1) && (userInputForAssertion == 3))
  {
      AssertColourPairAgainstCode(retrievedUserInput);
  }
  else
  {
      // Do nothing
  }
}
