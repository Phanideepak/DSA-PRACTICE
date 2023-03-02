#include<bits/stdc++.h>

using namespace std;

int getBit(int n, int posIndex){
    return (n & (1 << posIndex)) > 0;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++){
       cin>>a[i];
    }
    int answer = 0;
    for(int i=0;i<64;i++){
        int frequency = 0;
        for(int j=0;j<n;j++){
           if(getBit(a[j],i)){
               frequency = frequency + 1;
             }
        }
        if(frequency%3 !=0){
            answer = answer + 1<<i;
            cout<<i<<" "<<answer<<" "<<frequency<<endl;
        }
    }
    cout<<answer<<endl;
}