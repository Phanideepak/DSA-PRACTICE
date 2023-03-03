#include<bits/stdc++.h>

using namespace std;

/*
*  Find the length of longest arthimetic subarray in an array
*/
int main(){
    int n;
    cin>>n;
    
    int a[n];

    for(int i=0;i<n;i++){
       cin>>a[i];
    }

    int maxLength = 0;
    int currLength = 1;

    for(int i=0;i<n-1;i++){
       if(a[i]<a[i+1]){
          currLength ++;
       } else {
          maxLength = max(maxLength,currLength);
          currLength = 1;
       }
    }
    maxLength = max(currLength,maxLength);
    
    cout<<"Length of longest subarray: "<<maxLength<<endl;
}