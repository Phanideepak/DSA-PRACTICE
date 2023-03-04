#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int maxSum = INT_MIN;

    int sum =0;
    for(int i=0;i<n;i++){
        sum = 0;
        for(int j=i;j<n;j++){
            sum = sum + a[j];
            maxSum = max(maxSum, sum);
        }
    }

    cout<<"maxSubArraySum: "<<maxSum<<endl;
    

}