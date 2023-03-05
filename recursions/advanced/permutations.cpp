#include<bits/stdc++.h>
#define swap(a,b){a=a+b-(b=a);}

using namespace std;

void permute(string s, int l, int r){
    if(l==r){
        cout<<s<<endl;
    } else {
        for(int i=l;i<=r;i++){
            swap(s[i],s[l]);
            permute(s,l+1,r);
            swap(s[i],s[l]); //backtracking
        }
    }
}

int main(){
    string s;
    getline(cin,s);
    permute(s,0,s.length()-1);
}