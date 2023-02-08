#include<bits/stdc++.h>

using namespace std;


int gcd(int a, int b){
    if(b==0)
      return a;
    return (b,a%b);
}

int main()
{
    int a,b;
    cin >> a >>b;
    // gcd(a,b) = gcd(b,a%b). gcd(a,0) = a.
    cout<<gcd(a,b)<<" "<<endl;
}