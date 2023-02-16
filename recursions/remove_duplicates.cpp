#include<bits/stdc++.h>

using namespace std;


string removeDuplicate(string s){
    // base case
    if(s.length()==0){
       return "";
    }

    string remainingString = removeDuplicate(s.substr(1));
    // if first character of string is equal to first character of remaining string..
    // Then exclude first character.
    // else include first character.
    if(s[0]== remainingString[0]){
        return remainingString;
    }

    return s[0] + remainingString;

}


int main(){
    string s;
    getline(cin,s);
    cout<<removeDuplicate(s)<<endl;
}