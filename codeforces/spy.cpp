#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int o[t];
    for(int z=0;z<t;z++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n%2==1){
            int sum=0;
            for(int i=0;i<n;i++){
                sum = sum ^ a[i];
            }
            for(int i=0;i<n;i++){
                if(a[i]==sum){
                    o[z]=i+1;
                    break;
                }
            }
        } else {
            int maxNum = INT_MIN;
            for(int i=0;i<n;i++){
                maxNum = max(maxNum,a[i]);
            }
            int f[maxNum+1];
            for(int i=0;i<=maxNum;i++){
                f[i]=0;
            }
            for(int i=0;i<n;i++){
               f[a[i]]++;
            }
            int search;
            for(int i=0;i<=maxNum;i++){
                if(f[i]==1){
                    search = i;
                    break;
                }
            }
            for(int i=0;i<n;i++){
                if(search==a[i]){
                    o[z]=i+1;
                    break;
                }
            }
        }
    }
    
    for(int i=0;i<t;i++){
        cout<<o[i]<<endl;
    }
}