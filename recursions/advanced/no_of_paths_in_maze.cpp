#include<bits/stdc++.h>

using namespace std;

int countNoPath(int n,int i, int j){
   if(i==n-1 && j==n-1){
      return 1;
   }
   if(i==n || j==n){
     return 0;
   }
          // move vertically     // move horizontally.
   return countNoPath(n,i+1,j) + countNoPath(n,i,j+1);
}

/**
 *  No of ways to travel from (0,0) to (n-1,n-1) in 2d matrix.
*/
int main(){
    int n;
    cin>>n;
    cout<<countNoPath(n,0,0)<<endl;
}