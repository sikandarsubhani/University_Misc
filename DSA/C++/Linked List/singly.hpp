#pragma once
#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;
  //Constructor
Node(int val) : data(val),next(NULL){}
};

class LinkedList{
Node* head;
public:
  //Constructor
LinkedList():head(NULL){}
//Insert at Tail
void insertattail(int);
  //Makes List Circular
void circular();
  //Insert at HEAD
void insertathead(int);
  //Insertion By KEY 
void insertbykey(int,int);
  //Deletion by KEY
void deletion(int);
  //Search value
bool search(int);
  //Total Number of NODES
int TotalNodes();
  // DISPLAY list
void display();
  //Calculate sum of list
int calcsum();
};

void LinkedList::insertattail(int val){
	Node* newnode = new Node (val);
	if(head==NULL){
		head=newnode;
		head->next=NULL;
		return;
	}
	Node* temp=head;	
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newnode;
    }

void LinkedList::circular(){
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        }
        temp->next=head;
    }
void LinkedList::insertathead(int val){
	Node* newnode=new Node (val);
	newnode->next=head;
	head=newnode;
     }


void LinkedList::insertbykey(int val,int key){
     if(key==1 && head!=NULL){
     	insertathead(val);
     	return;
     	}
     	Node* temp=head;
     	for(int i=1;i<key-1;i++){
     	if(temp!=NULL){
     	   temp=temp->next;
     	   }
     	}
     	if(temp!=NULL){
     	Node* newnode= new Node(val);
     	newnode->next=temp->next;
     	temp->next=newnode;
     	}
     }

void LinkedList::deletion(int val){
	Node* temp=head;
	while(temp->next->data!=val){
		temp=temp->next;
	}
	Node* todelete=temp->next;
	temp->next=temp->next->next;
	delete todelete;
      }

bool LinkedList::search(int key){
	Node* temp=head;
	while(temp!=NULL){
		if(temp->data==key)
		return true;
		if(temp->next==head)
		return false;
	temp=temp->next;
	}
	return false;
      }

	int LinkedList::TotalNodes(){
	int count(0);
	Node* temp=head;
	while(temp!=NULL){
		count++;
		if(temp->next==head)
		break;
		temp=temp->next;
	 }
	 return count;
       }

void LinkedList::display(){
	Node* temp=head; 
	while(temp!=NULL){
		cout<<temp->data<<"->";
		if(temp->next==head)
		break;
		temp=temp->next;
		
	}
	cout<<"NULL"<<endl;
     }

int LinkedList::calcsum(){
	int sum(0);
	Node* temp=head;
	while(temp!=NULL){
		sum+=temp->data;
		temp=temp->next;
	}
   return sum;
    }
