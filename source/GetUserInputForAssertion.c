#include <stdio.h>
#include <GetUserInputForAssertion.h>
extern ColourCodingDatabase ColourCodingDatabaseDetails_struct [MaxPossibleColoursInMajorOrMinor];
int UserInputColourCode;

void GetUserInputForAssertion(void)
{
   int colourCode = 0, indexMajorColours = 0, indexMinorColours = 0, matchMajorColourWithInput = 0, matchMinorColourWithInput = 0;
   char UserInputMajorColourNameString[20], UserInputMinorColourNameString[20];
   printf("\n Input Major Colour : ");
   scanf("%s", UserInputMajorColourNameString);
   printf("\n Input Minor Colour : ");
   scanf("%s", UserInputMinorColourNameString);
   printf("\n Input Colour Code : ");
   scanf("%d", UserInputColourCode);

    for(indexMajorColours = 0; indexMajorColours < MaxPossibleColoursInMajorOrMinor ; indexMajorColours++)
    {
        for(indexMinorColours = 0; indexMinorColours < MaxPossibleColoursInMajorOrMinor ; indexMinorColours++)
        {
            matchMajorColourWithInput = strcmp(UserInputMajorColourNameString , ColourCodingDatabaseDetails_struct[indexMajorColours]->MajorColourNamesString);
            matchMinorColourWithInput = strcmp(UserInputMinorColourNameString , ColourCodingDatabaseDetails_struct[indexMajorColours]->MinorColourNamesString);
            if((matchMajorColourWithInput == 0) && (matchMinorColourWithInput == 0) && (UserInputColourCode >= 1) && (UserInputColourCode <= 25))
            {
              
            }
           else
           {
              printf("\nColours or Colour code entered has some error... Please revalidate and try again... Terminating... !!!\n");
           }
        }
    }
}
