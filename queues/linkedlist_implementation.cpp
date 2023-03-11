#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int x){
        data=x;
        next=NULL;
    }
};

class Queue{
    node* front;
    node* rear;

    public:
    Queue(){
        front=NULL;
        rear=NULL;
    } 

    void enqueue(int x){
        node* n = new node(x);
        if(front==NULL){
            front=n;
            rear=n;
            return;
        }
        rear->next=n; //node joining to linked list
        rear=n; // incrementing rear pointer.
    }

    void dequeue(){
        if(front==NULL){
           cout<<"queue empty"<<endl;
           return;           
        }
        node* deletedNode = front;
        front = front->next;
        delete deletedNode;
    }

    int peek(){
         if(front==NULL){
           cout<<"queue empty"<<endl;
           return 0;           
        }
        return front->data;
    }

    bool empty(){
         if(front==NULL){
           cout<<"queue empty"<<endl;
           return false;           
        }
        return true;
    }
};

int main(){
   Queue* q = new Queue();
   q->enqueue(11);
   q->enqueue(22);
   cout<<q->peek()<<endl;
   q->enqueue(33);
   cout<<q->peek()<<endl;
   q->dequeue();
}