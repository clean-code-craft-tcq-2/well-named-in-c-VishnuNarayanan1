#include <stdio.h>
#include "ConfigurationOfColourCodingDatabase.h"
#include "ProcessPrimaryInputOfUser.h"
#include "PrintColourCodingDatabase.h"
#include "AssertWithStandardInputs.h"

int main()
{
    int UserInputToProcess;
    printf("------ Welcome to the data base of colour coding ------\n\n");
    if(OperationTypeConfigured_Enum == PerformStandardOperations)
    {
        printf("------ Execution based on standard inputs as per configuration ------\n");
        PrintColourCodingDatabase();
        AssertWithStandardInputs();
    }
    else
    {
        printf("------ Execution based on user inputs as per configuration ------\n");
        do{
                printf("Enter '1' to print the colour pairs database against the designated code\n\n");
                printf("Enter '2' to check whether the code is matched rightly against the pair of colours given\n\n");
                printf("Enter '3' to check whether the colours are matched rightly against the code given\n\n");
                printf("Enter '0' to Exit\n\n");
                printf ("\nIts time for you to enter your input : \n");
                scanf(" %d",&UserInputToProcess);
                ProcessPrimaryInputOfUser(UserInputToProcess);
          } while((UserInputToProcess == 1) || (UserInputToProcess == 2) || (UserInputToProcess == 3));
    }
}
