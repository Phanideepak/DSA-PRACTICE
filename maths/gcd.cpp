#include<bits/stdc++.h>

using namespace std;

//gcd(a,b)=(b,a%b) and gcd(a,0)=a
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}