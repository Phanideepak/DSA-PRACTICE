#include<bits/stdc++.h>

using namespace std;

void move(int n, string source, string dest, string helper){
   if(n==0){
     return;
   }
   // move first n-1 blocks from A to B 
   move(n-1,source,helper,dest);
   //move 1 block from source to destination.
   cout<<"Move "<<n<<" from "<<source<<" to "<<dest<<endl;
   // move n-1 blocks from B to C
   move(n-1,helper,dest,source);
}

int main(){
    int n;
    cin>>n;
    move(n,"A","C","B");
}