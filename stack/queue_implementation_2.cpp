#include<bits/stdc++.h>

using namespace std;

class Stack{
    queue<int> q1;
    queue<int> q2;
    int N;

    Stack(){
      N=0;
    }

    void push(int x){
      q1.push(x);
    }

    void pop(){
       while(q1.empty()){
         return;
       }
       // transfer elements from q1 to q2 till size becomes one.
       while(q1.size()!=1){
          q2.push(q1.front());
          q1.pop();
       }

       q1.pop();
       N--;

       queue<int> temp = q1;
       q1=q2;
       q2=temp;
    }

    int top(){
        while(q1.empty()){
            return;
        }

        //transfer elements from q1 to q2 till size becomes one
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q1.pop();
        q2.push(ans);

        queue<int> temp = q1;
        q1=q2;
        q2=temp;

        return ans;
    }
};