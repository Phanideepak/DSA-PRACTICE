#include<bits/stdc++.h>

using namespace std;

int binaryToDecimal(string s){
    int sum = 0 ;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            sum = sum | (1<<i);
        }
    }
    return sum;
}

int octalToDecimal(string s){
    int sum = 0 ;
    int mul=1;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        sum = sum +  (s[i]-'0')*mul;
        mul = mul * 8;
        
    }
    return sum;
}

int hexaDecimalToDecimal(string s){
    int sum = 0;
    int mul = 1;
    reverse(s.begin(),s.end());

    for(int i=0; i<s.length();i++){
        if(s[i] >= '0' && s[i] <= '9'){
           sum = sum + mul*(s[i]-'0');
        } else if(s[i]>='a' && s[i]<='f'){
           sum = sum + mul*((s[i]-'a')+10);
        }
        mul = mul * 16;
    }

    return sum;
}

string decimalTobinary(int n){
    int temp = n;
    string s = "";
    while(temp>0){
        s = s + ((temp%2==0)?'0':'1');
        temp = temp/2;
    }
    reverse(s.begin(),s.end());
    return s;
}

string decimalToOctal(int n){
    int temp = n;
    string s = "";
    while(temp>0){
        s = s + (char)('0'+ temp%8);
        temp = temp/8;
    }
    reverse(s.begin(),s.end());
    return s;
}

string decimalToHexal(int n){
    int temp= n;
    string s = "";
    while(temp > 0){
        int rem = temp % 16;
        if(rem>=0 && rem<=9){
            s = s + (char)(rem+'0');
        } else {
            s = s + (char)((rem-10) + 'a');
        }
        temp = temp/16;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main(){
    cout<<binaryToDecimal("101011")<<endl;
    cout<<octalToDecimal("1111")<<endl;
    cout<<hexaDecimalToDecimal("abcd")<<endl;
    cout<<hexaDecimalToDecimal("e1")<<endl;
    cout<<decimalTobinary(11)<<endl;
    cout<<decimalToOctal(111)<<endl;
    cout<<decimalToHexal(11)<<endl;
    cout<<decimalToHexal(111)<<endl;
}