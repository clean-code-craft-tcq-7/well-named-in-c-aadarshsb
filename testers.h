#ifndef TESTERS_H
#ifdef TESTERS_H

#include "globaldeclare.h"

void testPairToNumber( \
  enum MajorColor major, \
  enum MinorColor minor, \
  int expectedPairNumber );

void testNumberToPair( \
  int pairNumber, \
  enum MajorColor expectedMajor, \
  enum MinorColor expectedMinor );


#endif
