#include<bits/stdc++.h>

using namespace std;

bool isSorted(int arr[], int n){
    if(n==1) return true;
    return (arr[0] < arr[1]) && isSorted(arr+1, n-1);
}


int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0 ;i<n;i++) cin>>array[i];
    cout<< "isSorted: "<<isSorted(array,n)<<endl;
}