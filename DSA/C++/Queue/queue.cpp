#include<iostream>
using namespace std;

#define SIZE 5
class queue{
    int arr[SIZE];
    int front,rear;
 public:
    queue():front(-1),rear(-1){}
    bool isfull(){
        if(front==0 && rear==SIZE)
        return true;
        return false;
}
    bool isempty(){
        if(front==-1 && rear==-1) 
            return true;
         return false;
    }
    void enqueue(int val){
    if(isfull()){
        cout<<"Queue is Full\n";
    }
    else{
        if(front==-1)front=0;
        rear++;
        arr[rear]=val;
        cout<<"Enqueued!\n";
    }
}
int deQueue() {
    int element;
    if (isempty()) {
      cout << "Queue is empty" << endl;
      return (-1);
    } else {
      element = arr[front];
      if (front >= rear) {
        front = -1;
        rear = -1;
      } /* Q has only one element, so we reset the queue after deleting it. */
      else {
        front++;
      }
      cout << endl
         << "Deleted -> " << element << endl;
      return (element);
    }
  }
};

int main(){
    queue q;
    cout<<q.isempty()<<q.isfull();
    q.enqueue(5);
    cout<<endl<<q.deQueue();
}
