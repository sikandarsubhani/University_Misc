#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    unsigned long int min_sum=0,max_sum=0;
    unsigned long int arr[5] {};
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    sort(arr,arr+5);
    for(int i=4;i>0;i--){
        max_sum+=arr[i];
    }
    for(int i=0;i<4;i++){
        min_sum+=arr[i];
    }
    cout<<min_sum<<" "<<max_sum;
    
    
    return 0;
}

