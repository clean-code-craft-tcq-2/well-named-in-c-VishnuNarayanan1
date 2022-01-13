#include <stdio.h>
#include <string.h>
#include "ConfigurationOfColourCodingDatabase.h"
#include "ProcessPrimaryInputOfUser.h"
#include "PrintColourCodingDatabase.h"
#include "AssertWithStandardInputs.h"

int main()
{
    char UserInputToProcess[30];
    printf("------ Welcome to the data base of colour coding ------\n\n");
    if(OperationTypeConfigured_Enum == PerformStandardOperations)
    {
        printf("--!!!!!---- Execution based on standard inputs as per the configuration ----!!!!!--\n\n");
        PrintColourCodingDatabase();
        AssertWithStandardInputs();
    }
    else
    {
        printf("------ Execution based on user inputs as per configuration ------\n");
        printf("Enter PRINT_COLOUR_CODING_DATABASE to print the colour pairs database against the designated code\n\n");
        printf("Enter GET_CODE_AGAINST_COLOURPAIR to check whether the code is matched rightly against the pair of colours given\n\n");
        printf("Enter GET_COLOURPAIR_AGAINST_CODE to check whether the colours are matched rightly against the code given\n\n");
        printf("Enter EXIT to terminate\n\n");
        printf ("\nIts time for you to enter your input : \n");
        scanf("%s",UserInputToProcess);
        ProcessPrimaryInputOfUser(UserInputToProcess);
    }
}
