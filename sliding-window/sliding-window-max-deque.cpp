#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    deque<int> q; // It is used for storing array indexes.
    vector<int> ans;

    //Iterate through first k elements - first window
    // finding index at which max element occured in first window
    for(int i=0;i<k;i++){
        // if the current element present is greater than rear element. Pop the rear element.
        while(!q.empty()&&a[q.back()]<a[i]){
             q.pop_back();
        }
        q.push_back(i);
    }
    // pushing the element at smallest possible index where max element has occurred.
    ans.push_back(a[q.front()]);
    for(int i=k;i<n;i++){
        // removing first element in window is maxIndex. Please remove it from dequeue.
        if(q.front()==i-k){
            q.pop_front();
        }
        while(!q.empty() && a[q.back()]<a[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}