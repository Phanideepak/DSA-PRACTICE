#include<bits/stdc++.h>

using namespace std;

string isLuckyDigit(string s){
    int f[10];
    for(int i=0;i<10;i++){
        f[i]=0;
    }
    for(int i=0;i<s.length();i++){
        f[s[i]-'0']++;
    }
    bool flag = true;

    for(int i=0;i<10;i++){
        if((i!=4 && i !=7)&&f[i]>0){
            flag = false;
            break;
        } else if(f[i]>0){
            flag = true;
        }
    }
    
    return flag?"YES":"NO";
}

int main(){
    string s;
    getline(cin,s);
    int lucky=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='4'||s[i]=='7'){
            lucky++;
        }
    }
    cout<<isLuckyDigit(to_string(lucky))<<endl;  
}