#ifndef TESTERS_H
#ifdef TESTERS_H

#include "globaldeclare.h"

void testPairToNumber( \
  enum enumMajorColor f_enMajorColour, \
  enum enumMinorColor f_enMinorColour, \
  int f_i32ExpectedPairNumber );

void testNumberToPair( \
  int f_i32PairNumber, \
  enum enumMajorColor f_enExpectedMajor, \
  enum enumMinorColor f_enExpectedMinor );


#endif
