#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    int count =0;
    string prev = "";
    while(t--){
        string s;
        getline(cin,s);
        if(prev!=s){
           count++;
        }
        prev=s;
    }
    cout<<count<<endl;
}