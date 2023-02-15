#include<bits/stdc++.h>

using namespace std;

void moveFrom(int n, string src, string dest, string helper){

    if(n==0) return;

    moveFrom(n-1,src, helper, dest);
    cout<<"Move "<< n<<" from "<<src<<" to "<<dest<<endl;
    moveFrom(n-1,helper,dest,src);
}


int main(){
   int n;
   cin>>n;
   moveFrom(n,"SOURCE","DESTINATION","HELPER");
}