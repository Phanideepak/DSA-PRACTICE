#include<bits/stdc++.h>

using namespace std;

int main(){
    string s="123456";
    string a = s.substr(0,3);
    string b = s.substr(3,5);
    cout<<stoi(a)<<endl;
    cout<<stoi(b)<<endl;
    cout<<stoi(a)+stoi(b)<<endl;

    int c = 12345;
    cout<<to_string(c).append("6")<<endl;
}