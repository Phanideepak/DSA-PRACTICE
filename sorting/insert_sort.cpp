#include<bits/stdc++.h>
#define swap(a,b){a=a+b-(b=a);}
using namespace std;


void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
       int current = a[i];
       int j = i-1;
       while(j>=0 && a[j] > current){
           a[j+1]=a[j]; 
           j--;
       }
       a[j+1] = current;
    }
}

int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
     cin>>a[i];
   }
   insertionSort(a,n);
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
}