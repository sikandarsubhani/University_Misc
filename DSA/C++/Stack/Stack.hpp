#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;
Node(int val) : data(val),next(NULL){}
};
class stack{
    Node* top;
    public:
    stack():top(NULL){}
    void push(int);
    void pop();
    void display();
    int top_val();
    bool isempty();
    int size();
};

    void stack::push(int val){
        Node* newnode= new Node(val);
        if(top==NULL)
        top=newnode;
        else{
            newnode->next=top;
            top=newnode;
        }
    }
    void stack::pop(){
        if(isempty()){
            cout<<"Stack is Empty. No element to pop\n";
            return;
        }
        Node* temp=top;
        top=top->next;
        free(temp);
    }
    void stack::display(){
        if(isempty()){
            cout<<"Stack is Empty.\n";
            return;
        }
        Node*temp=top;
        
        while(temp!=NULL){
            cout<<"| "<<temp->data<<" |"<<endl;
            temp=temp->next;
        }
        cout<<"-----"<<endl;
    }
    int stack::top_val(){
        if(isempty()){
            cout<<"Stack is Empty.\n";
            return -1;
        }
        return top->data;
    }
    int stack::size(){
        Node* temp=top;
        int count(0);
        while (temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }
    bool stack::isempty(){
        if(top==NULL)
        return true;
        return false;
    }