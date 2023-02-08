#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int max_sum = INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++){
        if(sum + a[i]<0) sum = 0;
        else{
            sum = sum + a[i];
            max_sum = max(max_sum,sum);
        }
    }
    cout<<"Max sub array: "<<max_sum<<endl;

}