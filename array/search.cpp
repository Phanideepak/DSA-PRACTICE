#include<bits/stdc++.h>

using namespace std;

int linearSearch(int a[],int n,int key){
    
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<linearSearch(a,n,key)<<endl;
}