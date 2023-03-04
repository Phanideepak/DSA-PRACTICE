#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    int max_el = INT_MIN;
    for(int i=0;i<n;i++) max_el = max(max_el,a[i]);

    bool check[max_el+1];

    for(int i=1;i<=max_el;i++){
        check[i] = false;
    }

    for(int i=0;i<n;i++){
        check[a[i]]=true;
    }
    for(int i=1;i<=max_el;i++){
        if(!check[i]){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"not found"<<endl;   
}