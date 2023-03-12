#include<bits/stdc++.h>

using namespace std;

class  Queue{
    stack<int> s;

    public:
    void enqueue(int x){
        s.push(x);            
    }

    int dequeue(){
        if(s.empty()){
            return -1;
        }
        // if one element is present return it.
        int element = s.top();
        s.pop();
        if(s.empty()){
            return element; 
        }

        //recursively pop the item, store it in a res variable, push the element back to stack and 
        //return it.
        int item = dequeue(); // it gives you target element after dequeued
        s.push(element); //stack- previous element restoration
        return item;
        
    }

     int peek() {
        if(s.empty()){
            return -1;
        }
        int element = s.top();
        s.pop();
        if(s.empty()){
            s.push(element);
            return element;
        }
        int res=peek();
        s.push(element);
        return res;
        
    }
    
    bool empty() {
        return s.empty();
    }
};


int main(){
    
}