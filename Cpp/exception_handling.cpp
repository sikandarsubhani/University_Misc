/*
Author : Sikandar

Name : Exception_Handling

Type : C++

Description : This program throw exception when i or j or both are out of bounds.
*/
#include<iostream>
using namespace std;
int func(int arr[],int i,int j,int n){
	if((i<=0 || i>n) && (j<=0 || j>n)) throw 0;
	if(i<=0 || i>n) throw 'i';
	if(j<=0 || j>n) throw 'j';
	return arr[i-1]*arr[j-1];
}
int main(){
	int arr[] {1,2,3,4,5};
	int n= sizeof(arr)/sizeof(arr[0]);
	try{
	cout<<func(arr,0,0,n);
}catch(char i){
	cout<<i<<" out of bounds";
}catch(...){
	cout<<"Both out of bounds";
}
}
