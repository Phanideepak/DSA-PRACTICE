#include<bits/stdc++.h>
#define swap(a,b){a=a+b-(b=a);}
using namespace std;


void selectionSort(int a[],int n){
   for(int i=0;i<n-1;i++){
      int min = i;
      for(int j=i+1;j<n;j++){
          if(a[min]>a[j]){
             min = j;
          } 
      }
      swap(a[min],a[i]);
   }
}

int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
     cin>>a[i];
   }
   selectionSort(a,n);
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
}