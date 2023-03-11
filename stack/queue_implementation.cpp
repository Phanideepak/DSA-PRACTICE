#include<bits/stdc++.h>

using namespace std;

class Stack{
   int N; 
   queue<int> q1;
   queue<int> q2;

   Stack(){
     N=0;
   }

   void push(int x){
    // add element to queue2
     q2.push(x);
     N++;
     //transfer elements from queue1 to queue2
     while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
     }
     // swap between queue1 and queue 2
     queue<int> temp = q1;
     q1 = q2;
     q2 = temp;
   }

   void pop(){
      q1.front();
      N--;
   }

   int top(){
      return q1.front();
   }

} ;

int main(){

}