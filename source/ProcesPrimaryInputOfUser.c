#include <stdio.h>
#include <ProcesPrimaryInputOfUser.h>

void ProcesPrimaryInputOfUser(char userInput)
{
  switch(userInput)
    case '1':
      PrintColourCodingDatabase();
      break;
    case '2':
        GetUserInputForAssertion();
        AssertCodeAgainstColourPair();
      break;
    case '3':
      GetUserInputForAssertion();
      AssertColourPairAgainstCode();
      break;
    default:
      break; 
}
