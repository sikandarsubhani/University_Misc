#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,x;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
         cin>>x; 
        v.push_back(x);
    }
    int pos,start,end;
    cin>>pos;
    v.erase(v.begin()+(pos-1));
    cin>>start>>end;
    v.erase(v.begin()+(start-1),v.begin()+(end-1));
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<< v[i]<<" ";
    }
    return 0;
}

