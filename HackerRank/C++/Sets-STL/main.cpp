#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int qtype,element;cin>>qtype>>element;
        if(qtype==1){
            s.insert(element);
        }
        if(qtype==2){
            s.erase(element);
        }
        if(qtype==3){
            auto pos = s.find(element);
            if (pos == s.end())
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
    }   
    return 0;
}
