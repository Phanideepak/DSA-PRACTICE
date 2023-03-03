#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int m = INT_MIN;
    for(int i=0;i<n;i++){
        m = max(m,a[i]);
    }
    int minIndex[m+1];

    for(int i=0;i<=m;i++){
        minIndex[i]=-1;
    }

    int answer = INT_MAX;

    for(int i=0;i<n;i++){
        if(minIndex[a[i]]==-1){
           minIndex[a[i]] = i;
        } else{
           answer = min(answer,minIndex[a[i]]);
        }
    }

    cout<<"min index: "<<answer<<endl;
    cout<<"element: "<<a[answer]<<endl;
}