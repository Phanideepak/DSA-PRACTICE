#include<bits/stdc++.h>

using namespace std;

int firstOccurence(int arr[],int n, int i,int key){
    if(i==n) return -1;
    if(arr[i]==key) return i;
    return firstOccurence(arr,n,i+1,key);
}

int lastOccurence(int arr[], int n, int i, int key){
    if(i==n) return -1;
    int lastIndex = lastOccurence(arr,n,i+1,key);
    if(lastIndex!=-1) return lastIndex;
    if(arr[i]==key) return i;
    return -1;        
}

int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<firstOccurence(arr,n,0,key)<<endl;
}