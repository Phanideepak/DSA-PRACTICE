#include<bits/stdc++.h>

using namespace std;

/*
* problem statement: https://leetcode.com/problems/online-stock-span/
*/

/**
 * Brute force: 
 * 
 * for(int i=0; i<n;i++){
 *    int days = 0;
 *   for(int j=i;j>=0;j--){
 *      if(prices[i])>=prices[j])) count++;   
 *      else break;
 *   }
 *   cout<<count<<endl; //stock span for ith day. 
 * }
*/

/**
 * Optimised approach: Create a stack of type pair<int,int> representing the price and days.
 * 1.) Add elements to the stack untill current element greater  than/equal to stack top.
 * 2.) If current element greater than stack top, then.
 *     pop the stack and add the span of stack top to the current element's span untill 
 *     stack top becomes greater than current element.
 * 
*/

vector<int> spanStocks(vector<int> a){
   vector<int> ans;
   stack<pair<int,int>> st;

   for(int i=0;i<a.size();i++){
       int days=1;
       while(!st.empty()&& a[i]>=st.top().first){
           days = days + st.top().second;
           st.pop(); 
       }
       st.push({a[i],days}); 
       ans.push_back(days);
   }
   return ans;   
}


int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> ans = spanStocks(a); 
}