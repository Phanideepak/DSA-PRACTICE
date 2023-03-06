#include<bits/stdc++.h>

using namespace std;

/*
*  Recursion case 1: If a (n-1)th item is selected. Then capacity reduced to capacity-wt[n-1] and n-1 items are left
*                    knapsack(val,wt,n-1,capacity-wt[n-1]) + val[n-1].
*                    Apply recursion on remaining items   knapsack(val,wt,n-1,capacity-wt[n-1])
*
*  Recursion case 2: If (n-1)th item is not excluded in selection then n-1 items will be remaining.
*                    knapsack(val,wt,n-1,capacity)
*  Desired value = maximum of recursion case 1 and recursion case 2. (maximum value scenario).
*
*  Return desired value. 
*/
int knapsack(int val[], int wt[], int n, int capacity){
    //base case: If capacity becomes zero after item selection or all the elements are selected.
    //  -> backtracking.
    if(n==0 || capacity==0){
        return 0;
    }

    // If weight of item exceeds resultant capacity, then exclude the item from selection.
    if(wt[n-1]>capacity){
        return knapsack(val,wt,n-1,capacity);
    }

    return max(knapsack(val,wt,n-1,capacity-wt[n-1])+val[n-1], knapsack(val,wt,n-1,capacity));

    
}


/*
*  Given n items with respective weight and value, and knapsack capacity of W.
*  Goal : Select items and place it in knapsack such that maximum value is achieved. 
          Find the max value that can be achieved.
*/
int main(){
    int n,capacity;
    cin>>n>>capacity;

    int val[n];
    int wt[n];

    for(int i=0;i<n;i++){
        cin>>val[i]>>wt[i];
    }
    
    cout<<knapsack(val,wt,n,capacity)<<endl;
}