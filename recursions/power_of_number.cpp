#include<bits/stdc++.h>

using namespace std;

int power_num(int n, int p){
   if(p==0) return 1;
   return n*power_num(n,p-1);
}

int main(){
    int n,p;
    cin>>n>>p;
    cout<<power_num(n,p);
}