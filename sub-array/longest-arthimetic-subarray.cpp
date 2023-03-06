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
    int currLength = 2;
    int currDifference = a[0]-a[1];

    for(int i=1;i<n-1;i++){
        if(a[i]-a[i+1] == currDifference){
            currLength++;
        } else {
            currDifference = a[i]-a[i+1];
            maxLength = max(maxLength,currLength);
            currLength = 2;
        }
    }
    maxLength = max(maxLength,currLength);
    
    cout<<"Length of longest subarray: "<<maxLength<<endl;
}