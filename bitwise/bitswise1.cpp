#include<bits/stdc++.h>
using namespace std;

/*
*  Find unique number in array where all numbers except one are present twice.
*/
int findUniqueNumberInArray(int arr[], int n){
    cout<<"findUniqueNumberInArray"<<endl;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum ^ arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<findUniqueNumberInArray(arr,n)<<endl;
}