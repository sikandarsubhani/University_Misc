#include <bits/stdc++.h>
using namespace std;
int main()
{
    double positive {0.00},negative {0.00},zero {0.00};
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            negative++;
        }
        if(arr[i]>0){
            positive++;
        }
        if(arr[i]==0){
            zero++;
        }
        
    }
    printf("%lf\n%lf\n%lf",positive/n,negative/n,zero/n);
    return 0;
}

