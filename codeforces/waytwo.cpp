#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    string output[t];
    cin.ignore();
    for(int i=0;i<t;i++){
                
        string s;
        getline(cin,s);
        int num = s.length()-2;
        output[i]=s;
        if(num>=9){
           output[i]=s[0]+to_string(num)+s[s.length()-1];
        }
    }

    for(int i=0;i<t;i++){
        cout<<output[i]<<endl;
    }
}