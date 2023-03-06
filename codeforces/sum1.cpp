#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s = (n%2==0)?"YES":"NO";
    if(n==2){
        s = "NO";
    } 
    cout<<s<<endl;
}