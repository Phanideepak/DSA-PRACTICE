#include<bits/stdc++.h>

using namespace std;

int main(){
    string s = "243425576";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
}