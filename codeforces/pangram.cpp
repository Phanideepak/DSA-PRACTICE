#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin.ignore();
    getline(cin,s);
    
    transform(s.begin(),s.end(),s.begin(),::tolower);

    int frequency[26];

    for(int i=0;i<26;i++){
        frequency[i]=0;
    }


    string ans = "YES";

    for(int i=0;i<s.length();i++){
       frequency[s[i]-'a']++; 
    }

    for(int i=0;i<26;i++){
        cout<<frequency[i]<< "";
    }
    for(int i=0;i<26;i++){
        if(frequency[i]==0){
            ans = "NO";
            break;
        }
    }
    cout<<ans<<endl;
    
}