#define MaxPossibleColoursInMajorOrMinor (5u);

enum MajorColour_Enum {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColour_Enum {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    enum MajorColour_Enum MajorColourNamesEnum;
    enum MinorColour_Enum MinorColourNamesEnum;
} ColorCodingDatabase;
