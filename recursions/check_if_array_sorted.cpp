#include<bits/stdc++.h>

using namespace std;


bool isSorted(int a[],int n){
   //base condition
   if(n==1){
      return true;
   }
   bool sortedArray = isSorted(a+1,n-1); //remaining part of array sorted.
   return (a[0]<a[1])&& sortedArray;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<isSorted(a,n)<<endl;
}