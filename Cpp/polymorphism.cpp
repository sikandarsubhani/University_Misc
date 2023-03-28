/*
Author : Sikandar

Name : polymorphism

Type : C++

Description : Demonstrate Run time Polymorphism 
*/

#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
class A{// This is an abstract class
        public:
        virtual int abc()=0;// pure virtual
};
class B:public A{
        public:
                int abc(){ cout<<"abc of B\n";
                           return rand();
                }
};
class C:public A{
        public:
        int abc(){ cout<<"abc of C\n";
        return rand()*2;
                }
};
int main(){
        srand(time(0));
        A *ptr;
         B obj2; C obj3;
                ptr=&obj2;
        cout<<ptr->abc()<<endl;
                ptr=&obj3;
        cout<<ptr->abc()<<endl;
}
