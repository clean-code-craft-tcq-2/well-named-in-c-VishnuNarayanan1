#include <stdio.h>
#include <assert.h>

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET, MaxMajorColor};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE, MaxMinorColor};
const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

void PrintColourCodingDatabase(void)
{
  int indexMajorColors = 0;
  int indexMinorColors = 0;
  int colorCode = 1;
  printf("------- COLOUR CODING DATABASE -------\n\n");
  for(indexMajorColors = 0; indexMajorColors < (int)MaxMajorColor; indexMajorColors++)
  {
    for(indexMinorColors = 0; indexMinorColors < (int)MaxMinorColor; indexMinorColors++)
    {
       printf("\n Major Color : %s  ", MajorColorNames[indexMajorColors]);
       printf("\n Minor Color : %s  ", MinorColorNames[indexMinorColors]);
       printf("\n Color Code : %d  \n", colorCode);
      colorCode++;
    }
  }
}
