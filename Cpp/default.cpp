/*
Author : Sikandar

Name : default

Type : C++

Description : Default Constructor
*/


#include <iostream>
using namespace std;

// declare a class
class A {
  private:
    double length;
    double height;

  public:
    // Default constructor to initialize variables
    A() {
      length = 0;
      height = 0;
    }
};

int main() {
  A obj1;
  A obj2;

  return 0;
}
