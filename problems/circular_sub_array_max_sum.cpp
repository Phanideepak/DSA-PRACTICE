#include<bits/stdc++.h>

using namespace std;

int kadane(int a[], int n){
    int sum=0;
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        sum =sum + a[i];
        if(sum<0) sum = 0;
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int max_sum = INT_MIN;
    int sum = 0;
    int nonwrapsum = kadane(a,n);
    for(int i=0;i<n;i++){
        sum += a[i];
        a[i] = -a[i];
    }
    int wrapsum = sum + kadane(a,n);

    cout<<max(wrapsum,nonwrapsum)<<endl;

}