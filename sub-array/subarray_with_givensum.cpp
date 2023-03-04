#include<bits/stdc++.h>

using namespace std;

/**
 * Optimised approach: 
 * 1. To find out the subarray, we need to find out the start and end index of subarray.
 * 2. Let i,j be the start and end index of answer subarray. i,j will be initialised to zero.
 * 3. Operate while loop with the condition sum less than or equal to required sum by incrementing j value.
 * 4. After this while loop, you might get required array sum or less array sum.
 * 5. Operate another while loop with j index condition. Inside the while loop. Reset sub array sum = sum + a[j]
 *    If subarray sum is greated than required sum then increment i val. 
 *    If required sum is achieved break out of the loop else j = j+1
*/

int main(){
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int i=0;
    int j=0;
    int sum = 0;

    // operating on end index j
    while(j<n && sum+a[j]<=s){
         sum = sum + a[j];
         j=j+1;
    }

    if(sum == s){
        // because endindex= j-1 because a[j] is not included in sum
        cout<<i<<" "<<j-1<<endl;
        return 0;
    }

    // operating on start index
    while(j<n){
        // include the a[j] to the subarray sum
        sum = sum + a[j];
        if(sum>s){
            sum = sum - a[i]; // remove a[i] element from the sum.
            i = i+1; // subarray contraction from start index
        }

        // if required sum is achieved.
        if(sum == s){
            cout<<i<<" "<<j<<endl;
            return 0;     
        }
    }

    cout<<-1<<endl;


}