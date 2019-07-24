#include "node.h"
#include "constraint.h"

typedef struct struct_domain {
  Node *theNodes;
  Constraint *theConstraints;
} Domain;


void domainPrint(Domain *theDomain);
void domainAddNode(Domain *theDomain, int tag, double crd1, double crd2);
void domainPrintNodes(Domain *theDomain);
void domainAddConstraint(Domain *theDomain, int tag, int nodeTag, bool c1, bool c2, bool c3);
void domainPrintConstraints(Domain *theDomain);
Node *domainGetNode(Domain *, int nodeTag);
Constraint *domainGetConstraint(Domain *, int tag);

