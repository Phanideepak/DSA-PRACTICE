#include<bits/stdc++.h>

using namespace std;

string replacePi(string s){
    if(s.length()==0){
        return "";
    }
    if(s[0]=='p'||s[1]=='i'){
        return "3.14"+ replacePi(s.substr(2));
    }
    return s[0]+replacePi(s.substr(1));
}

int main(){
    string s;
    getline(cin,s);
    cout<<replacePi(s)<<endl;
}