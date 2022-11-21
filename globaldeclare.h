#ifndef GLOBALDECLARE_H
#define GLOBALDECLARE_H

/*-----------INCLUDES------------------*/

/*-----------DEFINES-------------------*/
#define MAX_COLORPAIR_NAME_CHARS 16;

/*-----------ENUMS---------------------*/
enum enumMajorColor {
  WHITE, 
  RED, 
  BLACK, 
  YELLOW, 
  VIOLET
};
enum enumMinorColor {
  BLUE, 
  ORANGE, 
  GREEN, 
  BROWN, 
  SLATE
};
/*-----------TYPEDEFS------------------*/
typedef struct {
  enum enumMajorColor enMajorColor;
  enum enumMinorColor enMinorColor;
}ColorPair_t;
/*----------FUNCTION DECLARATIONS-----*/

#endif
