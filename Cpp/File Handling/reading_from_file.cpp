/*
Author : Sikandar

Name : reading_from_file

Type : C++

Description : This program read and count total float numbers from binary file. 
*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
float temp;
int count=0;
ifstream file("info.bin",ios::binary);
while(!file.eof()){
file>>temp;
count++;
}
cout<<"Total float variables: "<<count;

}
