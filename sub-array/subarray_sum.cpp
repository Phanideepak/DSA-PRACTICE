#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    string s;
    int sum;
    for(int i=0;i<n;i++){
        s = "";
        sum = 0;
        // i ->start index of subarray
        // j-> end index of subarray.
        for(int j=i;j<n;j++){
            s = s + to_string(a[j]) + " ";
            sum = sum + a[j];
            cout<<"subarray :"<<s<<endl;
            cout<<"subarray sum: "<<sum<<endl;
        }
        cout<<endl;
    }
}