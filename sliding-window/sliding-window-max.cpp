#include<bits/stdc++.h>

using namespace std;

/*
*  Given a sliding window of size k and aray of element n.
*  Find the maximum element for every sliding window.
*/
int main(){
    int n;
    int k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int> ans;
    multiset<int,greater<int>> ms;

    // take first k elements of input array and add it to the multiset
    for(int i=0;i<k;i++){
        ms.insert(a[i]);
    }
    //add max element to ans array.
    ans.push_back(*ms.begin());

    for(int i=k;i<n;i++){
        //delete the val equivalent to a[i-k] from multiset set.
        ms.erase(ms.lower_bound(a[i-k]));
        ms.insert(a[i]);
        ans.push_back(*ms.begin());
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
                       
}