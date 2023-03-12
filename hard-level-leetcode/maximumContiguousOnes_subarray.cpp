#include<bits/stdc++.h>

using namespace std;

/***
 *  Given an array of zeros and ones. We may change upto K value from 0 to 1.
 * Find the longest contiguous subarray of ones.
*/

/**
 * Approach: Find longet subarray with atmost k zeros.
 * i denotes the start of subarray and j denotes end of subarray.
 * J pointer used for looping in array.
 * For each a[j], try to find the longest subarray.
 * if A[i] ~ A[j] subarray(i,j) has zeros <= K, we continue to increment j
 * if A[i] ~ A[j] subarray(i,j) has zeros > K, we increment i,j and we won't 
 *  count zero contibution of previous i value due to subarray start index contraction.
*/

int main(){
    int n;
    int k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    int j=0;
    int zeroCount=0;
    int ans=0;

    for(int j=0;j<n;j++){
       if(a[j]==0) zeroCount++;

       while(zeroCount>k){
          //remove a[i] contribution, as we are contracting subarray start index 
          if(a[i]==0) zeroCount--;
          i++;
       }
       // subarray length
       ans = max(ans,j-i+1);
    }

    cout<<ans<<endl;
}