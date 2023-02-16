#include<bits/stdc++.h>

using namespace std;


string removeDuplicate(string s){
    // base case
    if(s.length()==0){
       return "";
    }

    string remainingString = removeDuplicate(s.substr(1));
    if(s[0]==remainingString[0]){
        return remainingString;
    }

    return s[0] + remainingString;

}


int main(){
    string s;
    getline(cin,s);
    cout<<removeDuplicate(s)<<endl;
}