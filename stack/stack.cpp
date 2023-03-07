#include<iostream>
#define swap(a,b) {a=a+b-(b=a);}

using namespace std;

class stack {
    int top;
    int * arr;
    int size;

    public:
    stack(int n){
        top =-1;
        size = n;
        arr = new int[n];
    }

    bool isEmpty(){
        return (top==-1);
    }

    void push(int n){
       if(top==n-1){
          cout<<"full overflow"<<endl;
          return;
       }
       arr[++top]  = n;      
    }

    int Top(){
        if(isEmpty())
          return -1;
        return arr[top];
    }

    void pop(){
        if(top == -1){
            cout<<"empty"<<endl;
        }
        top = top-1;
        return;
    }

    void printStack(){
        if(!isEmpty()){
            for(int i=top;i>=0;i--){
                cout<< arr[i]<<" ";
            }cout<<endl;
        }
    }

    void reverseStack(){
        if(!isEmpty()){
            int n = top+1;
            for(int i=0;i<n/2;i++){
                swap(arr[i],arr[n-i-1]);
            }          
        } else {
            cout<<"Empty stack"<<endl;
        }
    }


};

int main(){
   stack* st = new stack(6);
   st->push(34);
   st->push(56);
   st->push(65);
   st->printStack();
   cout<<endl;
   cout<<st->Top()<<endl;
   st->pop();
   st->printStack();
   st->push(101);
   st->push(22);
   st->push(33);
   st->push(44);
   st->push(55);
   st->printStack();
   st->reverseStack();
   st->printStack();
   cout<<st->Top()<<endl;
}