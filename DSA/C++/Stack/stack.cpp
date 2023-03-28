#include<iostream>
using namespace std;
#define SIZE 5
class stack{
    int arr[SIZE];
    int top;
    public:
    stack():top(-1){}
    bool isfull(){
        if(top==SIZE-1)
        return true;
        return false;
    }
    bool isempty(){
        if(top==-1)
        return true;
        return false;
    }
    void push(int val){
        if(isfull()){
            cout<<"Stack is Full\n";
        }
        else{
            top++;
            arr[top]=val;
        }

    }
    void pop(){
        if(isempty()){
            cout<<"Stack Empty\n";
        }
        else{
            cout<<arr[top]<<" popped\n";
            top--;
        }
    }
};

int main(){
    stack st;
    st.push(4);
    st.pop();
}
