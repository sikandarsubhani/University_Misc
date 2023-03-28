#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  
    string a,b,c;
    cin>>a>>b;
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a+b;
    int temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<endl<<a<<" "<<b;
    return 0;
} 

