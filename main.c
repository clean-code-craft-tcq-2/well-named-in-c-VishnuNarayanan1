#include <stdio.h>
#include "ProcessPrimaryInputOfUser.h"

int main()
{
    int UserInputToProcess;
    printf("------ Data base of colour coding ------\n\n");
    do{
            printf("Enter '1' to print the colour pairs database against the designated code\n\n");
            printf("Enter '2' to check whether the code is matched rightly against the pair of colours given\n\n");
            printf("Enter '3' to check whether the colours are matched rightly against the code given\n\n");
            printf("Enter '0' to Exit\n\n");
            printf ("\nIts time for you to enter your input : \n");
            scanf("%d",&UserInputToProcess);
            ProcessPrimaryInputOfUser(2);
      } while((UserInputToProcess == 1) || (UserInputToProcess == 2) || (UserInputToProcess == 3));
}
