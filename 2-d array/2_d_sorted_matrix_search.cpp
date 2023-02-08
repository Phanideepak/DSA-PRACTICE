#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,key;
    cin>>n>>m>>key;
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    } 
    int i = 0;
    int j = m-1;
    while(i < n && j >=0){
        if(a[i][j] == key){
            cout<<"("<<i<<","<<j<<")"<<endl;
            return 0;
        } else if(a[i][j]>key){
            j=j-1;
        } else{
            i=i+1;
        }
    }
    cout<<-1<<endl;
}