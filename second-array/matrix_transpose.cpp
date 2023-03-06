#include<bits/stdc++.h>
#define swap(a,b) {a=a+b-(b=a);}
using namespace std;


int main(){
    int m;
    cin>>m;
    int a[m][m];

    for(int i=0; i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            swap(a[i][j] ,a[j][i]);          
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}