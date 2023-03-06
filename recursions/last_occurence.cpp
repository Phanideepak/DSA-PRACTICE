#include<bits/stdc++.h>

using namespace std;

int lastOccurence(int a[], int n, int i, int key){
    //recursive teminal condition.
    if(i==n){
        return -1;
    }

    int find = lastOccurence(a,n,i+1,key);
    if(find!=-1){
       return find;
    }
    if(a[i]==key){
        return i;
    }
    return -1;
}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<lastOccurence(a,n,0,k)<<endl;
}