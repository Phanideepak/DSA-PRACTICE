#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int maxNum = (a>b)?a:b;

    //create a boolean array of size maxNum+1
    bool composite[maxNum+1];
    for(int i=0;i<=maxNum;i++){
        composite[i]=false;
    }

    // mark the multiples of prime as composite.
    for(int i=2;i<=maxNum;i++){
        // if the number is not composite. It means. It is a prime.
        if(!composite[i]){
            // looping through the multiples of prime and marking them as composite.
            for(int j=i*i;j<=maxNum;j=j+i){
                composite[j]=true;
            }
        }
    }

    for(int i=a;i<=b;i++){
        if(!composite[i]){
            cout<<i<<" ";
        }
    }
}