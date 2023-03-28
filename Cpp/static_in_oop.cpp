/*
Author : Sikandar

Name : static_in_oop

Type : C++

Description : Static variable and Function
*/
#include <iostream>
using namespace std;

class A
{
private:
static int total; // Static Variable
int id; 

public:
A()
{
total++; 
id = total; 
}
~A() //destructor
{
total--;
cout << "Destroying ID number " << id << endl;
}
static void showtotal() //static function
{
cout << "Total is " << total << endl;
}
void showid() //non-static function
{
cout << "ID number is " << id << endl;
}
};

int A::total = 0; 

int main()
{
A g1;
A::showtotal();
A g2, g3;
A::showtotal();
g1.showid();
g2.showid();
g3.showid();
cout << "----------end of program----------\n";
return 0;
}
