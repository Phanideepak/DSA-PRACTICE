#include<bits/stdc++.h>

using namespace std;


int findMaxSubArraySum(int a[], int n){
   int cumulativeArray[n]={0};
   cumulativeArray[0] = a[0];
   for(int i=1;i<n;i++){
      cumulativeArray[i] = cumulativeArray[i-1] + a[i];
   }
   for(int i=0;i<n;i++){
     cout<<cumulativeArray[i]<<" ";
   }
   cout<<endl;
   int max_num = INT_MIN;
   int sum = 0;

   for(int i=0;i<n;i++){
     sum =0;
     for(int j=i;j<n;j++){
        if(i==0){
           sum = cumulativeArray[j];
        } else{
           sum = cumulativeArray[j]-cumulativeArray[i-1]; 
        }
        cout<<"Sum: "<<sum<<endl;
        max_num = max(max_num,sum);
     }
   }
   return max_num;

}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<findMaxSubArraySum(a,n)<<endl;
}