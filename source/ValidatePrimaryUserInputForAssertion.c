#include <stdio.h>
#include <ValidatePrimaryUserInputForAssertion.h>
#include <GetUserInputForAssertion.h>

void ValidatePrimaryUserInputForAssertion(char userInputForAssertion)
{
  UserInputColoursAndCodes retrievedUserInput;
  retrievedUserInput = GetUserInputForAssertion();
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
