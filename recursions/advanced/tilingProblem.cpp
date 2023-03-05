#include<bits/stdc++.h>

using namespace std;



/*
* find no of ways of tiling 2*n board with 2*1 tile
*/

/*
*  1.) If we place a 2*1 tile vertically, then remaining size of 2*n board will be 2*(n-1) board
*  2.) If we place a 2*1 tile horizaontal then remaining size of 2*n board will be 2*(n-2) board
*  3.) If n=0, no of ways =0, If n=1, no of ways =1
*  4.) Apply principle of addition on statement 1 and statement 2.  
*/
int tiling(int n){
    if(n==0||n==1){
        return n;
    }
    return tiling(n-1)+ tiling(n-2);
}


int main(){
    int n;
    cin>>n;
    cout<<tiling(5)<<endl;
}