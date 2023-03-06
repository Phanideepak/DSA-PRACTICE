#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int temp = n;
    int count=0;
    while(temp){
        temp= temp & (temp-1);
        count++;
    }
    cout<<count<<endl;
}