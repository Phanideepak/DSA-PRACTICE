#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<floor((log10(b)-log10(a))/(log10(1.5)))+1<<endl;
}