#include<bits/stdc++.h>
using namespace std;

string move_char_toend(string s){
   // base case
   if(s.length()==0){
      return "";
   }

   // apply recurson on remaining n-1 characters string.
   string ans =move_char_toend(s.substr(1));

   // If first character of string is x, move it to the last position.
   if(s[0]=='x'){
      return ans + s[0];
   } 

   return s[0]+ans;

}

int main(){
    string s;
    getline(cin,s);
    cout<<move_char_toend(s)<<endl;
}