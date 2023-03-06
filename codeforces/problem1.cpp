#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int f[26];
    int count =0; 

    for(int i=0;i<26;i++){
        f[i]=0;
    }

    for(int i=0;i<s.length();i++){
       f[s[i]-'a'] ++;
    }

    for(int i=0;i<26;i++){
        if(f[i]>0){
            count++;
        }
    }
    cout<<((count%2==0)?"CHAT WITH HER!":"IGNORE HIM!")<<endl;
}