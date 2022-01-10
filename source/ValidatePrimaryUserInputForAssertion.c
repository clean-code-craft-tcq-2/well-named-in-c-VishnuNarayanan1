#include <stdio.h>
#include "includes/GetSecondaryInputFromUserForAssertion.h"
#include "includes/ValidatePrimaryUserInputForAssertion.h"
#include "includes/AssertCodeAgainstColourPair.h"
#include "includes/AssertColourPairAgainstCode.h" 

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
