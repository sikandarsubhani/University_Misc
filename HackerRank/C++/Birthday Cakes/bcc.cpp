#include <iostream>
using namespace std;
int main() {
    int n,candle=0,max=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    max=arr[0];
    for(int i=0; i<n; i++)
        if(arr[i] > max)
            max = arr[i];
    for(int i = 0; i < n; i++)
        if (arr[i] == max)
            candle++;
    cout<<candle;
    return 0;
}

