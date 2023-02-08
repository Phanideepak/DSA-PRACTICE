#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int i=0;
    int j=0;
    int currSum = 0;

    while(a[j]+currSum <=s&& j<n){
        currSum = currSum + a[j];
        j++;
    }

    if(s == currSum){
        cout<<i<<endl<<j-1<<endl;
    }

    while(j<n){
        currSum = currSum + a[j];
        while(currSum > s){
            currSum = currSum - a[i];
            i++;
        }
        if(currSum == s){
            cout<<i<<" "<<j<<endl;
            break;
        }
        j++;
    }
}