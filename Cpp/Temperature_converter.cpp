#include<iostream>
using namespace std;

int main()
{
    float far,cel;              //far=Fahrenheit & cel = celcius
    cout<<"Enter temperature in Fahrenheit F :";
    cin>>far;
    cel=(far-32)*5/9;
    cout<<"\n The temperature is "<<cel<<" Celsius"<<endl;
    return 0;
}