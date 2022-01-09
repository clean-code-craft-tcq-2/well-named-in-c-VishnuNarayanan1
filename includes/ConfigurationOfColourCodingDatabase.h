#define MaxPossibleColoursInMajorOrMinor (5u);

typedef struct {
    const char* MajorColourNamesString[];
    const char* MinorColourNamesString[];
    enum MajorColor MajorColourNamesEnum;
    enum MinorColor MinorColourNamesEnum;
} ColorCodingDatabase;
