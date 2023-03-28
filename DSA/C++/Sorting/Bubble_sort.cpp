#include<iostream>
using namespace std;


void swapper(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}


void Bubble(int arr[],int n){
for(int i=0;i<n;i++)
for(int j=0;j<n-i-1;j++)
if(arr[j]>arr[j+1])
swapper(&arr[j],&arr[j+1]);
}




void print(int arr[],int n){
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<endl;
}

int main(){
int SIZE=5;
int *arr = new int (SIZE);
*(arr)=8;
*(arr+1)=-9;
*(arr+2)=15;
*(arr+3)=12;
*(arr+4)=6;
print(arr,SIZE);
Bubble(arr,SIZE);
print(arr,SIZE);
}
