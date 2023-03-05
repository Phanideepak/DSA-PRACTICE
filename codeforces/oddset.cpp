#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string output[n];

    for(int j=1;j<=n;j++){
       int p;
       cin>>p;
       int a[2*p];
       int even=0;
       for(int i=0;i<2*p;i++){
           cin>>a[i];
       }
       
       for(int i=0;i<2*p;i++){
          if(a[i]%2==0){
             even = even+1;
          }
       }
       output[j-1] = (even == p) ? "Yes":"No";      
    }

    for(int j=0;j<n;j++){
        cout<<output[j]<<endl;
    }
}