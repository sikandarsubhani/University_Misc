/*
Author : Sikandar

Name : reading_from_file

Type : C++

Description : This program takes 'n' float numbers from user and write it to binary file. 
*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
int n;
cout<<"How many Float numbers you want? ";
cin>>n;
ofstream infile("info.bin",ios::binary);
while(n!=0){
float f;cin>>f;
infile<<" "<<f;
n--;
}
infile.close();
}
