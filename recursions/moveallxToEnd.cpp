#include<bits/stdc++.h>

using namespace std;

string moveAll(string s){
    if(s.length()==0){
        return "";
    }
    string ans = moveAll(s.substr(1));
    if(s[0]=='x'){
        return ans+s[0];
    }
    return s[0]+ans;
}

int main(){
    string s;
    getline(cin,s);
    cout<<moveAll(s)<<endl;
}