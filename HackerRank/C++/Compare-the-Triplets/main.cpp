#include<iostream>
using namespace std;
#define REP(i,n) for(int i=0;i<(int)n;i++) //pre-define for loop
int a[3],b[3];
int main(){
    REP(i, 3) cin>>a[i];
    REP(i,3) cin>>b[i];
    int x=0,y=0;
    REP(i, 3) if(a[i]>b[i]){
        ++x;
    } else if(a[i]<b[i]){
        ++y;
    }
    cout<<x<<" "<<y;
}

