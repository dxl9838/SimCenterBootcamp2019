#include <stdio.h>
#include "constraint.h"

void constraintPrint(Constraint *theConstraint){
  printf("Constraint : %d ", theConstraint->tag);
  printf("Node Tag: %d ", theConstraint->constrainedNode);
  printf("Fix: %d %d %d \n",
         theConstraint->constraints[0],
         theConstraint->constraints[1],
         theConstraint->constraints[2]);
}

void constraintSetup(Constraint *theConstraint, int tag, int nodeTag,
                      bool c1, bool c2, bool c3) {
  theConstraint->tag = tag;
  theConstraint->constrainedNode=nodeTag;
  theConstraint->constraints[0]=c1;
  theConstraint->constraints[1]=c2;
  theConstraint->constraints[2]=c3;
  }
