#ifndef GLOBALDECLARE_H
#ifdef GLOBALDECLARE_H

/*-----------INCLUDES------------------*/

/*-----------TYPEDEFS------------------*/
typedef struct {
  enum enumMajorColor enMajorColor;
  enum enumMinorColor enMinorColor;
}ColorPair_t;
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
/*----------FUNCTION DECLARATIONS-----*/

#endif
