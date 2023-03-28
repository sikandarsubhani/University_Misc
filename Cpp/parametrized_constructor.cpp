/*
Author : Sikandar

Name : parametrized

Type : C++

Description : Parametrized Constructor
*/


#include <iostream>
using namespace std;

// declare a class
class A {
  private:
    double length;
    double height;

  public:
    // parameterized constructor to initialize variables
    A(double len, double hgt) {
      length = len;
      height = hgt;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  A obj1(10.5, 8.6);
  A obj2(8.5, 6.3);

  cout << "Area of obj 1: " << obj1.calculateArea() << endl;
  cout << "Area of obj 2: " << obj2.calculateArea();

  return 0;
}
