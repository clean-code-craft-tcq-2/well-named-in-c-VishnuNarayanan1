#include <stdio.h>
#include "ProcessPrimaryInputOfUser.h"
#include "ValidatePrimaryUserInputForAssertion.h"

void ProcessPrimaryInputOfUser(char userInput)
{
  switch(userInput)
    case '1':
        PrintColourCodingDatabase();
      break;
    case '2':
    case '3':
        ValidatePrimaryUserInputForAssertion(userInput);
      break;
    default:
        printf("\n Valid user input is required to proceed ... Terminating ...\n");
      break; 
}
