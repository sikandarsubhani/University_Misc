#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;
Node(int val) : data(val),next(NULL){}
};

class Queue{
    Node* front;
    Node* rear;
    public:
    Queue():front(NULL),rear(NULL){}
    void enQueue(int);
    void deQueue();
    void display();
    bool isempty();
};

void Queue::enQueue(int val){
    Node* newnode=new Node(val);
    if(front==NULL){
        front =newnode;
        rear = newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void Queue::deQueue(){
    if(isempty()){
        cout<<"\nNo element to Pop\n";
        return;
    }
    Node* temp=front;
    front=front->next;
    free(temp);
}
void Queue::display(){
    if (isempty())
    {
        cout<<"\nNo Element in queue\n";
        return;
    }
    Node* temp=front;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
bool Queue::isempty(){
    if(front ==NULL)
    return true;
    return false;
}