#include<bits/stdc++.h>

using namespace std;

int binary_search(int a[], int n, int l, int r, int k){
    if(l<=r){
        int mid = (l+r)/2;
        cout<<"Iteration ("<<l<<","<<mid<<","<<r<<")"<<endl;
        if(a[mid]==k){
           return mid;
        } else if (a[mid]>k){
           //search in the left subarray : [l....mid-1] 
           return binary_search(a,n,l,mid-1,k);  
        } else {
           // search in the right subarray: [mid+1....r]
           return binary_search(a,n,mid+1,r,k);    
        }
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
    cout<<binary_search(a,n,0,n-1,k)<<endl;
}