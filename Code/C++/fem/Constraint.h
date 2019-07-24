#ifndef _CONSTRAINT
#define _CONSTRAINT 

#include <iostream>

class Constraint {
 public:
  Constraint(int tag, int nodeTag, bool c1, bool c2, bool c3);
  int GetTag(void); 
  int GetNodeTag(void);
  void Print(std::ostream &s);
 private:
  int tag;
  int constrainedNode;
  bool constraints[3];
};

#endif
