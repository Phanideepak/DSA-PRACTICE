#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int count =0;

    while(n>0){
        if(n>=5){
            count = count + n/5;
            n = n%5; 
        } else if(n==4){
            count = count + 1;
            n=n%4;
        } else if(n==3){
            count = count + 1;
            n=n%3;
        } else if(n==2){
            count = count + 1;
            n=n%2;
        } else if(n==1){
            count = count + 1;
            n=n%1;
        }
    }
    cout<<count<<endl;
}