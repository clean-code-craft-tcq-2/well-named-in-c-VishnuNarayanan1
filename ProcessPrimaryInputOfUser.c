#include <stdio.h>
#include "ProcessPrimaryInputOfUser.h"
#include "PrintColourCodingDatabase.h"
#include "ValidatePrimaryUserInputForAssertion.h"

void ProcessPrimaryInputOfUser(char userInput[])
{
      if(strcmp(userInput, "PRINT_COLOUR_CODING_DATABASE") == 0)
      {
          PrintColourCodingDatabase();
      }
      else if((strcmp(userInput, "GET_CODE_AGAINST_COLOURPAIR") == 0) || (strcmp(userInput, "GET_COLOURPAIR_AGAINST_CODE") == 0))
      {
          ValidatePrimaryUserInputForAssertion(userInput);
      }
      else
      {
          printf("\n Valid user input is required to proceed ... Terminating ...\n");
      }
}
