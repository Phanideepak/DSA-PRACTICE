#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    int o[t]; 
    for(int z=0;z<t;z++){
       string s;
       getline(cin,s);
       
       o[z] = (s[0]-'0')+ (s[2]-'0');
    }

    for(int i=0;i<t;i++){
        cout<<o[i]<<endl;
    }
}