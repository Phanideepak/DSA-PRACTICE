#include<bits/stdc++.h>

using namespace std;

// base case: string length = 0
// Logic: s[0]=p &&s[1]=i then print 3.14 and recurse through s.sub(2) else print s[0] and recurse s.sub(1)
void replacePi(string s){
   if(s.length()==0){
      return;
   }
   if(s[0]=='p'||s[1]=='i'){
      cout<<"3.14";
      replacePi(s.substr(2));
   } else {
      cout<<s[0];
      replacePi(s.substr(1));
   }
}

int main(){
    string s;
    getline(cin,s);
    replacePi(s);
}