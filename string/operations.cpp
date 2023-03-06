#include<bits/stdc++.h>

using namespace std;

int main(){
    string s = "I love my india";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    string b = s.append("and Dil ko pyar karna");
    cout<<b<<endl;
    sort(b.begin(),b.end());
    cout<<b<<endl;

    string c="deepak";
    string d="deapak";
    if(c.compare(d)>0){
        cout<<"greater"<<endl;
    }
}