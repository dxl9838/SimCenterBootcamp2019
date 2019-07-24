#include <stdio.h>
#include <stdlib.h>
#include "domain2.h"
#include "node.h"
#include "constraint.h"

void domainPrint(Domain *theDomain) {
  printf("The Nodes:\n");
  domainPrintNodes(theDomain);
  printf("The Constraints:\n");
  domainPrintConstraints(theDomain);
}

void domainAddNode(Domain *theDomain, int tag, double crd1, double crd2) {
  Node *theNextNode = (Node *)malloc(sizeof(Node));
  nodeSetup(theNextNode, tag, crd1, crd2);

  if (theDomain->theNodes != NULL) {
    theNextNode->next = theDomain->theNodes;
  } else {
    theNextNode->next = NULL;
  }
  theDomain->theNodes = theNextNode;
}

void domainPrintNodes(Domain *theDomain) {
  Node *theCurrentNode = theDomain->theNodes;
  while (theCurrentNode != NULL) {
    nodePrint(theCurrentNode);
    theCurrentNode = theCurrentNode->next;
  };
}

Node *domainGetNode(Domain *theDomain, int nodeTag) {
  Node *theCurrentNode = theDomain->theNodes;
  while (theCurrentNode != NULL) {
    if (theCurrentNode->tag == nodeTag) {
      return theCurrentNode;
    } else {
      theCurrentNode = theCurrentNode->next;
    }
  };
  return NULL;
}

void domainAddConstraint(Domain *theDomain, int tag, int nodeTag, bool c1, bool c2, bool c3) {
  Constraint *theNextConstraint = (Constraint *)malloc(sizeof(Constraint));
  constraintSetup(theNextConstraint, tag, nodeTag, c1, c2, c3);

  if (theDomain->theConstraints != NULL) {
    theNextConstraint->next = theDomain->theConstraints;
  } else {
    theNextConstraint->next = NULL;
  }
  theDomain->theConstraints = theNextConstraint;

}

void domainPrintConstraints(Domain *theDomain) {
  Constraint *theCurrentConstraint = theDomain->theConstraints;
  while (theCurrentConstraint != NULL) {
    constraintPrint(theCurrentConstraint);
    theCurrentConstraint = theCurrentConstraint->next;
  };
}

Constraint *domainGetConstraint(Domain *theDomain, int tag) {
  Constraint *theCurrentConstraint = theDomain->theConstraints;
  while (theCurrentConstraint != NULL) {
    if (theCurrentConstraint->tag == tag) {
      return theCurrentConstraint;
    } else {
      theCurrentConstraint = theCurrentConstraint->next;
    }
  };
  return NULL;
}
