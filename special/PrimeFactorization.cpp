#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int spf[n+1];

    //Base case. Smallest prime factor of prime is prime-itself.
    for(int i=0;i<=n;i++) spf[i]=i;


    for(int i=2;i<=n;i++){
        // if spf of i is not set.
        if(spf[i]==i){
            // Looping trough multiples of prime.
            for(int j=i*i; j<=n; j = j + i){
                // if spf of j is not set.
                if(spf[j]==j){
                    // Smallest prime factor of a prime multiple is a prime-itelf
                    spf[j]=i;
                }
            }
        }
    }

    // prime factorisation.
    while(n!=1){
       cout<<spf[n]<<endl;
       n = n/spf[n];
    }

}