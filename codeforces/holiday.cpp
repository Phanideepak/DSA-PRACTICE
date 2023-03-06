#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int maxNum = INT_MIN;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxNum = max(maxNum,a[i]);
        a[i]=-1*a[i];
    }
    for(int i=0;i<n;i++){
        sum = sum + maxNum + a[i];
    }
    cout<<sum<<endl;

}