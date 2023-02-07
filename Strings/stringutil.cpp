#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    getline(cin,str);

    for(int i =0;i<str.size();i++){
        if(str[i] >='a' and str[i] <='z'){
            str[i] = str[i] + (int) ('A' -'a');
        }
    }
    int frequency[26];
    for(int i=0;i<26;i++) frequency[i]=0;

    int max_frequency = -1;
    for(int i=0;i<str.size();i++){
        frequency[str[i]-'A'] ++;
    }

    for(int i=0;i<26;i++){
       if(frequency[i] > max_frequency) max_frequency = frequency[i]; 
    }

    cout<<str<<endl;
    cout<<max_frequency<<endl;
}