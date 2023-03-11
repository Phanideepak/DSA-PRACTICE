#include<bits/stdc++.h>

using namespace std;

int prec(char ch){
    if(ch=='^') return 3;
    if(ch =='*'|| ch=='/') return 2;
    if(ch=='+'||ch=='-') return 1;
    return -1;
}

string infixToPostfix(string s){
    string res = "";
    stack<char> st;

    for(int i=0;i<s.length();i++){
       if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
           res=res + s[i];
       } else if(s[i]=='('){
          st.push(s[i]);
       } else if(s[i]==')'){
           while(!st.empty()&&st.top()!='('){
              res = res + st.top();
              st.pop();
           }
           // pop out left bracket.
           if(!st.empty()){
              st.pop();
           }

       } else {
           while(!st.empty()&& prec(st.top())>prec(s[i])){
             res= res + st.top();
             st.pop();
           }
           st.push(s[i]);
       }
    }

    while(!st.empty()){
        res = res + st.top();
        st.pop();
    }

    return res;
}



int main(){
    string s = "(a-b/c)*(a/k-1)";

    cout<<infixToPostfix(s)<<endl;
}