#include <stdio.h>
#include "includes/ProcessPrimaryInputOfUser.h"
#include "includes/PrintColourCodingDatabase.h"
#include "includes/ValidatePrimaryUserInputForAssertion.h"

void ProcessPrimaryInputOfUser(int userInput)
{
  switch(userInput)
  {
      case 1:
          PrintColourCodingDatabase();
        break;
      case 2:
      case 3:
          ValidatePrimaryUserInputForAssertion(userInput);
        break;
      default:
          printf("\n Valid user input is required to proceed ... Terminating ...\n");
        break; 
  }
}
