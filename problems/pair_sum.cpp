#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    // brute force approach by comparing two elements at i,j 

    //sort the array
    // increment low index when a[low]+a[high] < sum
    // decrement high index when a[low]+a[high] > sum
    // continue the loop till u get a[low]+a[high]=sum or (low<high )satisfies.
}