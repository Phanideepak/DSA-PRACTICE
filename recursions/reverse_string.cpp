#include<bits/stdc++.h>

using namespace std;

string reverseString(string s){
    if(s.empty()){
        return "";
    }
    return reverseString(s.substr(1))+ s[0];
}

int main(){
    string s;
    getline(cin,s);
    cout<<reverseString(s)<<endl;
}