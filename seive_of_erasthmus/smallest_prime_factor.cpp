#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin>>n;
    
    int spf[n+1];

    for(int i=0;i<=n;i++) spf[i]=i;

    for(int i=2;i<=n;i++){
        //smallest primefactor of a prime is prime.
        if(spf[i]==i){
           //smallest primefactor of a prime-multiple should be prime number. 
           for(int j=i*i;j<=n;j=j+i){
                if(spf[j]==j){
                    spf[j]=i;
                } 
            }
        }
    }

    // prime factorization
    while(n!=1){
        cout<<spf[n]<<endl;
        n=n/spf[n];
    }
}