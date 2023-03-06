#include<bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[],int n, int i, int key){
   //if key if found;
   if(arr[i]==key){
      return i;
   }
   // if i == n, element not found.
   if(i==n){
      return -1;
   }
   return firstOccurence(arr,n,i+1,key);
}

int main(){
   int n,k;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++){
      cin>>a[i];
   }
   cout<<firstOccurence(a,n,0,k);
}