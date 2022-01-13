#define MaxPossibleMajorColours (5u)
#define MaxPossibleMinorColours (5u)

enum MajorColour_Enum {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColour_Enum {BLUE, ORANGE, GREEN, BROWN, SLATE};

enum OperationType {PerformStandardOperations, PerformOperationsBasedOnUserInput};

extern const char* MajorColourNamesString[];
extern const char* MinorColourNamesString[];
extern enum OperationType OperationTypeConfigured_Enum;
