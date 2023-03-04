#include<bits/stdc++.h>
using namespace std;


int main(){
    int m,n,p;
    cin>>m>>n>>p;

    int a[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cin>>a[i][j]; 
        }
    }

    int row = 0;
    int col = n-1;
    while(row<m and col >= 0){
        if(a[row][col]==p){
            cout<<row<<" "<<col<<endl;
            return 0;
        } else if(a[row][col] > p){
            col = col -1;
        } else {
            row = row + 1;
        }
    }
    cout<<"not found"<<endl;

    

}