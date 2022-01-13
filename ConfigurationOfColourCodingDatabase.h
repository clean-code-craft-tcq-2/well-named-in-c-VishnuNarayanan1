#define MaxPossibleMajorColours (5u)
#define MaxPossibleMinorColours (5u)

enum MajorColour_Enum {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColour_Enum {BLUE, ORANGE, GREEN, BROWN, SLATE};
enum UserInputOptions {PRINT_COLOUR_CODING_DATABASE, GET_CODE_AGAINST_COLOURPAIR, GET_COLOURPAIR_AGAINST_CODE};

enum OperationType {PerformStandardOperations, PerformOperationsBasedOnUserInput};

extern const char* MajorColourNamesString[];
extern const char* MinorColourNamesString[];
extern enum OperationType OperationTypeConfigured_Enum;
