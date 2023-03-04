#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n = s.length();

    bool check = true;

    for(int i=0;i<n;i++){
        if(s[i]!=s[n-i-1]){
            check = false;
            break;
        }
    }

    cout<<check<<endl;
}