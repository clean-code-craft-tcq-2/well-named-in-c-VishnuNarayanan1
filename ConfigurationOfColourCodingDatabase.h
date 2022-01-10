#define MaxPossibleColoursInMajorOrMinor (5u)

enum MajorColour_Enum {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColour_Enum {BLUE, ORANGE, GREEN, BROWN, SLATE};

enum OperationType {PerformStandardOperations, PerformOperationsBasedOnUserInput};

typedef struct {
    enum MajorColour_Enum MajorColourNamesEnum;
    enum MinorColour_Enum MinorColourNamesEnum;
} ColourCodingDatabase;

extern const char* MajorColourNamesString[];
extern const char* MinorColourNamesString[];

