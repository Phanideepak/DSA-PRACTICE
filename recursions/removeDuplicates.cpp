#include<bits/stdc++.h>

using namespace std;

string removedConsecutiveDuplicates(string s){
   if(s.empty()){
      return "";
   }
   // ans -> resultant string 
   string ans = removedConsecutiveDuplicates(s.substr(1));
   if(s[0]==ans[0]){
      return ans;
   }
   return s[0]+ ans;
}

int main(){
    string s;
    getline(cin,s);
    cout<<removedConsecutiveDuplicates(s)<<endl;
}