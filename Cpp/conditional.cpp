#include<iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Enter an Integer: ";
    cin>>i;
    i%2==0 ? cout<<"\nInteger is Even\n" : cout<<"Integer is Odd\n";
    return 0;
}