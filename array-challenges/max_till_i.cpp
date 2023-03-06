#include<bits/stdc++.h>
using namespace std;

/*
*   For every i from 0 to n-1 output max of array[0......i]
*/
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int maxEl = a[0];
    for(int i=0; i<n; i++){
        maxEl = max(a[i],maxEl);
        cout<<maxEl<<" ";
    }
}