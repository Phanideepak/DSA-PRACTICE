#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    long output[t];
    for(int i=0;i<t;i++){
        int n,a,b;
        cin>>a>>b>>n;
        long arr[n+1];
        arr[0]=a;
        arr[1]=b;
        for(int i=2;i<=n;i++){
            arr[i]=arr[i-1]^arr[i-2];
        }
        output[i]=arr[n];
    }

    for(int i=0;i<t;i++){
        cout<<output[i]<<endl;
    }
   
    
}