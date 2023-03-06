#include<bits/stdc++.h>

using namespace std;

string check(int a,int b,int c){
    int maxNum = max(a,max(b,c));
    int minNum = min(a,min(b,c));
    int mid;
    if((a==maxNum && b==minNum)||(a==minNum && b==maxNum)){
       mid = c;
    }

    if((a==maxNum && c==minNum)||(a==minNum && c==maxNum)){
        mid = b;
    }

    if((c==maxNum && b==minNum)||(c==minNum && b==maxNum)){
        mid = a;
    }

    return ((minNum + mid) == maxNum)? "YES":"NO";

}

int main(){
    int t;
    cin>>t;
    string out[t];
    for(int k=0;k<t;k++){
       int a,b,c;
       cin>>a>>b>>c;
       out[k]=check(a,b,c);
    }

    for(int k=0;k<t;k++){
        cout<<out[k]<<endl;
    }
}