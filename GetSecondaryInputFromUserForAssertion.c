#include <stdio.h>
#include "ConfigurationOfColourCodingDatabase.h"
#include "GetSecondaryInputFromUserForAssertion.h"

UserInputColoursAndCodes GetUserInputForAssertion(void)
{
   UserInputColoursAndCodes userInputDetails_struct;
   userInputDetails_struct.inputMatchSuccessStatus = 0;
   int indexMajorColour = 0, indexMinorColour = 0, matchMajorColourWithInput = 0, matchMinorColourWithInput = 0;
   char UserInputMajorColourNameString[20], UserInputMinorColourNameString[20];
   printf("\n Input Major Colour : ");
   scanf("%s", UserInputMajorColourNameString);
   printf("\n Input Minor Colour : ");
   scanf("%s", UserInputMinorColourNameString);
   printf("\n Input Colour Code : ");
   scanf("%d", &(userInputDetails_struct.colourCodingOutOfUserInput));

    for(indexMajorColour = 0; indexMajorColour < MaxPossibleColoursInMajorOrMinor ; indexMajorColour++)
    {
        for(indexMinorColour = 0; indexMinorColour < MaxPossibleColoursInMajorOrMinor ; indexMinorColour++)
        {
            matchMajorColourWithInput = strcmp(UserInputMajorColourNameString , MajorColourNamesString[indexMajorColour]);
            matchMinorColourWithInput = strcmp(UserInputMinorColourNameString , MinorColourNamesString[indexMinorColour]);
            if((matchMajorColourWithInput == 0) && (matchMinorColourWithInput == 0) && (userInputDetails_struct.colourCodingOutOfUserInput >= 1) && (userInputDetails_struct.colourCodingOutOfUserInput <= 25))
            {
                 userInputDetails_struct.majorColourIndexOutOfUserInput = indexMajorColour;
                 userInputDetails_struct.minorColourIndexOutOfUserInput = indexMinorColour;
                 userInputDetails_struct.inputMatchSuccessStatus = 1;
            }
           else
           {
               printf("\nColours or Colour code entered has some error... Please revalidate and try again... Terminating... !!!\n");
           }
        }
        if(userInputDetails_struct.inputMatchSuccessStatus == 1)
        {
           break;
        }
    }
    return userInputDetails_struct;
}
