#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    for(int i=0;i<n;i++){
        int l = i+1; 
        int h = n-1;
        while(l<h){
            int current = a[l]+a[h]+a[i];
            if(current == s){
                cout<<"found"<<endl;
                return 0;
            } else if(current>s){
                h=h-1;
            } else {
                l=l+1;
            }
        }
    }
    cout<<"not found"<<endl;
}