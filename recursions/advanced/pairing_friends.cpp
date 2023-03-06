#include<bits/stdc++.h>

using namespace std;

// no of ways in which n friends can be single or paired up
/*
* 1.  First friend can remain single,apply recursion on n-1 friends.
* 2.  First friends can be paired with n-1 friends -> n-1 ways and apply recursion on n-2 friends.
*/
int friendship(int n){
    // no people - no pairing
    if(n==0){
       return 0;
    }
    // 1 guy - 1 possibility
    if(n==1){
       return 1;
    }
    // A,B -> A,B paired up or Both One of  A,B remaining individual 
    if(n==2){
        return 2;
    }
           //try recursive on n-1 friends   
    return friendship(n-1)    +
    // try on n-2 friends  //no of possible ways of pairing          
    friendship(n-2)     *  (n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<friendship(5)<<endl;
}