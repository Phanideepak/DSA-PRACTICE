#include<bits/stdc++.h>

using namespace std;

int countWays(int a[],int src, int dest){
   if(src==dest){
      return 1;
   }  
   if(src > dest){
     return 0;
   }
   int count = 0;
   for(int i=1;i<=6;i++){
       count = count + countWays(a,src+i,dest); 
   }
   return (a,src+1,dest);
}


/* 
* Given an array of n elements.
* Find no of paths to travel from one starting index  to ending index.
* Travelling can be done by rolling down the dice of 6.
*/
int main(){
    int n,s,d;
    cin>>n>>s>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<countWays(a,s,d);
}