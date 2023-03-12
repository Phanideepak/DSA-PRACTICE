#include<bits/stdc++.h>

using namespace std;

int main(){
    string s  = "-+7*45+20";
    stack<int> st;

    //for prefix evaluation, travel from right to left.
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        } else {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            cout<<a<<","<<b<<endl;
            switch(s[i]){
                case '+':
                    st.push(a+b);
                    break;
                case '-':
                    st.push(a-b);
                    break;
                case '*':
                    st.push(a*b);
                    break;
                case '/':
                    st.push(a/b);
                    break;
                case '^':
                    st.push(pow(a,b));
                    break;
            }    
        }
    }

    cout<<st.top()<<endl;
}