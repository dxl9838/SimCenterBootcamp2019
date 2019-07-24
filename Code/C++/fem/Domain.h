#ifndef _DOMAIN
#define _DOMAIN
#include <iostream>
#include "Domain.h"
#include "Constraint.h"
#include <map>

class Node;
class Constraint;

class Domain {
 public:
  Domain();
  ~Domain();

  Node *getNode(int tag);
  void Print(std::ostream &s);
  int AddNode(Node *theNode);

  Constraint *getConstraint(int tag);
  int AddConstraint(Constraint *theConstraint);

 private:
  std::map<int, Node *>theNodes;
  std::map<int, Constraint *>theConstraints;
};

#endif
