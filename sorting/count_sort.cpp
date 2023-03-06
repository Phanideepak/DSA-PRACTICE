#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int mx =INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx = max(mx,a[i]);
    }
    int f[mx+1];

    for(int i=0;i<=mx;i++){
        f[i]=0;
    }

    for(int i=0;i<n;i++){
        f[a[i]]++;
    }
    int temp[n];
    int z=0;
    for(int i=0;i<=mx;i++){
        if(f[i] > 0){
            for(int p=0;p<f[i];p++){
                temp[z] = i;
                z = z + 1;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }cout<<endl;
}