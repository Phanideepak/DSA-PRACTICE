#include<bits/stdc++.h>

using namespace std;

// problem statement: https://leetcode.com/problems/largest-rectangle-in-histogram/
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans  = 0;
    for(int i=0;i<n;i++){
        int mi = INT_MAX;
        for(int j=i;j<n;j++){
            mi = min(mi,a[j]);
            ans = max(ans,mi*(j-i+1));
        }
    }
    cout<<ans<<endl;

}