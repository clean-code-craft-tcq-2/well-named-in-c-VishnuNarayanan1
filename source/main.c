#include <stdio.h>
#include <assert.h>

int main()
{
    printf("------ Data base of colour coding ------\n\n");
    printf("Enter '1' to print the colour pairs database against the designated number\n\n");
    printf("Enter '2' to check whether the number is matched rightly against the pair of colours given\n\n");
    printf("Enter '3' to check whether the colours are matched rightly against the number given\n\n");
    printf("Enter '0' to Exit\n\n");

   int UserInputToExecute;
    do{
        printf ("\nIts time to enter :");
        scanf("%d",&UserInputToExecute);
        ProcessUserInput(UserInputToExecute);
    } while((UserInputToExecute == 1) || (UserInputToExecute == 2) || (UserInputToExecute == 3));
}
