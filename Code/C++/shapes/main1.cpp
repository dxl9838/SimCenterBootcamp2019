//#include "Rectangle.h"
//#include "Circle.h"
#include "Square.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv) {
  Square s1(2.0);
  Shape *s2 = new Square(1.0);
  Shape *s3 = new Square(3.0);

  s1.PrintArea(std::cout);
  s2->PrintArea(std::cout);
  s3->PrintArea(std::cout);

  ofstream myfile;
  myfile.open ("example.txt");
  //myfile << "Square width=2.0, area=\n"<<s1.GetArea;
  //myfile << "Square width=1.0, area=\n"<<s2->GetArea;
  //myfile << "Square width=3.0, area=\n"<<s3->GetArea;
  s1.PrintArea(myfile);
  s2->PrintArea(myfile);
  s3->PrintArea(myfile);
  myfile.close();


  return 0;
}


