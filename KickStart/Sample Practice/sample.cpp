#include<iostream>
using namespace std;

int main(){
int cases(0),n(0),m(0),sum(0);
cin>>cases;
for(int i=0;i<cases;i++){
cin>>n>>m;
sum=0;
for(int j=0;j<n;j++){
int candy;
cin>>candy;sum+=candy;
}
cout<<"Case #"<<i+1<<": "<<sum%m<<endl;
}
}
