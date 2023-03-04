#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);

    int maxNum = INT_MIN;
    int current = 0 ;

    for(int i=0;i<s.length();i++){
         if(s[i]==' '|| s[i]=='\0'){
            maxNum = max(maxNum, current);
            current = 0;
         } else {
            current = current+1;
         }
    }
    maxNum = max(maxNum,current);
    cout<<maxNum<<endl;
}