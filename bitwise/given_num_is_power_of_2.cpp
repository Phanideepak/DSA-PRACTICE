#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    bool check = false;
    if(n==0){
      cout<<"not a 2 power"<<endl;  
      return 0;
    }

    /*
    *   Binary form of 16 : 10000
    *   Binary form of 15:  01111
    *   16 & 15 = 0
    *   And of 2 power number and its predecessor should be zero.
    */
    if((n &(n-1))==0){
        check = true;
    }

    if(check){
        cout<<"2 power"<<endl;
    } else {
        cout<<"not 2 power"<<endl;
    }
}