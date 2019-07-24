#include "Constraint.h"

Constraint::Constraint(int id,  int nodeTag, bool c1, bool c2, bool c3)
  :tag(id)
{
  constrainedNode=nodeTag;
  constraints[0]=c1;
  constraints[1]=c2;
  constraints[2]=c3;
}

int
Constraint::GetTag(void) {
  return tag;
}

int
Constraint::GetNodeTag(void) {
  return constrainedNode;
}

void 
Constraint::Print(std::ostream &s){
  s << "Constraint : " << tag;
  s << " Node Tag: " << constrainedNode;
  s << " Fix: " << constraints[0] << " " <<  constraints[1] << " " <<  constraints[2] << "\n";;
}

