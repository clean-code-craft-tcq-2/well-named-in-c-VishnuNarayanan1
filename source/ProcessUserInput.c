#include <stdio.h>
#include <ProcesUserInput.h>

void ProcessUserInput(char userInput)
{
  switch(userInput)
    case '1':
      PrintColourCodingDatabase();
      break;
    case '2':
    case '3':
      GetUserInputForAssertion();
      break;
    default:
      break; 
}
