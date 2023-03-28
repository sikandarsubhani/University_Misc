#include <iostream>
#include <cstdio>
#include<algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d){
    int arr[3];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    sort(arr,arr+4);
    return arr[3];
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

