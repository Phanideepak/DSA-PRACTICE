#include<bits/stdc++.h>

using namespace std;

void printIncrement(int n){
   if(n==0){
      return ; 
   } 
   printIncrement(n-1);
   cout<<n<<" ";
}

void printDecrement(int n){
   if(n==0){
      return ; 
   } 
   cout<<n<<" ";
   printDecrement(n-1);
}

int main(){
    int n;
    cin>>n;
    int temp = n;
    printIncrement(temp);
    cout<<endl;
    temp =n;
    printDecrement(temp);
}