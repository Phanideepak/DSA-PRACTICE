#include<bits/stdc++.h>

using namespace std;

/*
*  Problem: Given a mathematical expression, find whether it have redundant parenthesis or not. It contains
*   operators.
*  Solution: when the right bracket is encountered, if stack top is left parenthesis then expression is said to
              have redundant brackets.
             When right bracket is encountered, stack top should be an operator for non redundancy.  
*/
int main(){
    string s;
    getline(cin,s);
    stack<char> st;

    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push(s[i]);
        } else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
           st.push(s[i]);
        } else if(s[i]==')'){
            if(st.top()=='('){
                cout<<"Having redundant parenthesis"<<endl;
                return 1;
            }
            while(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/'){
                st.pop();
            }
            st.pop();
        }
    } 
    
    cout<<"Non redundant parenthesis"<<endl;

}