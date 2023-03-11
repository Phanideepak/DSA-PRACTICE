#include<iostream>

using namespace std;


class queue{
    int *arr;
    int n;
    int front;
    int rear;

    public:
    queue(int n){
        arr = new int[n];
        front = -1;
        rear = -1;
        n=n;
    }

    bool empty(){
        if(front==-1||front>rear){
           return true;
        }
        return false;
    }

    void enqueue(int x){
         if(rear==n-1){
            return;
         }
         rear++;
         arr[rear]=x;
         if(front==-1) front=0;
    }

    void dequeue(){
        if(empty()){
            cout<<"No elements found"<<endl;
            return;
        }
        front++;
    }

    int peek(){
        if(empty()){
            cout<<"No elements found"<<endl;
            return -1;
        }
        return arr[front];
    }
         
};

int main(){
    queue* q = new queue(6);
    q->enqueue(34);
    q->enqueue(45);
    q->enqueue(56);
    cout<<q->peek()<<endl;
    q->dequeue();
    cout<<q->peek()<<endl;
    q->enqueue(78);
    q->enqueue(79);
    q->enqueue(89);
    cout<<q->empty()<<endl;
}