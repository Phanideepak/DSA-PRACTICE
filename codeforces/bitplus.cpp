#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    int x = 0;
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        if(s[0]=='+'||s[2]=='+'){
            x= x+1;
        } else {
            x=x-1;
        }
    }
    cout<<x<<endl;
}