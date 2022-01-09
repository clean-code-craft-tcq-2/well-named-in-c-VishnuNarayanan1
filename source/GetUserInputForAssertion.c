#include <stdio.h>
#include <GetUserInputForAssertion.h>
char UserInputMajorColourName[20];
char UserInputMinorColourName[20];
int UserInputColourCode;

void GetUserInputForAssertion(void)
{
   printf("\n Input Major Colour : ");
   scanf("%s", UserInputMajorColourName);
   printf("\n Input Minor Colour : ");
   scanf("%s", UserInputMinorColourName);
   printf("\n Input Colour Code : ");
   scanf("%d", UserInputColourCode);
}
