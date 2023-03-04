#include<bits/stdc++.h>

using namespace std;

/**
 * Kadane algorithm implementation.
*/

/*
*  Test case:

   Input
   7
   11 -22 333 -44 88 -77 777
   
   Output:
   1077
*/

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // find maximum subarray sum.
    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i=0;i<n;i++){
        currentSum = currentSum + a[i];
        // if current sum is negative. Make currentSum = 0. Consider only positive sub array sums.
        if(currentSum < 0){
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }

    cout<<maxSum<<endl;
}