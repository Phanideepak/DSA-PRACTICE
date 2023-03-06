#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int maxNum = max(max(a,b),max(c,d));
    a=maxNum-a;
    b=maxNum-b;
    c=maxNum-c;
    d=maxNum-d;
    if(a>0) cout<<a<<" ";
    if(b>0) cout<<b<<" ";
    if(c>0) cout<<c<<" ";
    if(d>0) cout<<d<<" ";
}