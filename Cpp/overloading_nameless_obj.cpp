/*
Author : Sikandar

Name : overloading_nameless_obj

Type : C++

Description : increment counter variable with ++ operator, uses unnamed temporary object
*/
#include <iostream>
using namespace std;

class Counter
{
private:
unsigned int count; //count
public:
Counter() : count(0) 
{ }
Counter(int c) : count(c) 
{ }
unsigned int get_count() 
{ return count; }
Counter operator ++ () //increment count
{
++count;
return Counter(count); 
}
};
int main()
{
Counter c1, c2; 
cout << “\nc1=” << c1.get_count(); 
cout << “\nc2=” << c2.get_count();
++c1; 
c2= ++c1;  
cout << “\nc1=” << c1.get_count(); 
cout << “\nc2=” << c2.get_count() << endl;
return 0;
}
