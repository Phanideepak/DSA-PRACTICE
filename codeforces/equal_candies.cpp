#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int z=0;z<t;z++){
        int n;
        cin>>n;
        int a[n];
        int minE = INT_MAX;
        int sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            minE = min(minE,a[i]);
            
        }

        for(int i=0;i<n;i++){
            sum = sum + a[i]-minE;
        }
        
        cout<<sum<<endl;
    }
}