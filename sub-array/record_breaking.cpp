#include<bits/stdc++.h>

using namespace std;

/*
*  i from 0 to n-1. 
*  a[i] is recording day if a[i] > max(elements of previous index) or a[i]>a[i+1] or i==n-1
*/
int main(){
   int n;
   cin>>n;
   int a[n];
   int count = 0;
   for(int i=0;i<n;i++){
     cin>>a[i];
   }
   int maxNum = a[0];

   if(a[0]>a[1]) count++;

   for(int i=1;i<n-1;i++){
       if(a[i]>maxNum && a[i]>a[i+1]){
          count++;
       }
       maxNum = max(maxNum,a[i]); 
   }
   
   if(a[n-1]>maxNum) count++;

   cout<<count<<endl;
       
}