/*
Author : Sikandar

Name : friend_class

Type : C++

Description : Friend class 'beta'
*/
#include <iostream>
using namespace std;

class A
{
private:
int data1;
public:
A() : data1(99) { } //constructor
friend class B;   //B is a friend class
};
class B
{ public:
void func1(A a) { cout << "\ndata1=" << a.data1;
};
 
 
int main()
{
A a;
B b;
b.func1(a);
b.func2(a);
cout << endl;
return 0;
}
