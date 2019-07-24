#ifndef _CONSTRAINT
#define _CONSTRAINT

#include <stdio.h>
#include <stdbool.h>

typedef struct constraint {
  int tag;
  int constrainedNode;
  bool constraints[3];
  struct constraint *next;
} Constraint;

void constraintPrint(Constraint *);
void constraintSetup(Constraint *, int tag, int nodeTag, bool c1, bool c2, bool c3);

#endif
