#include<bits/stdc++.h>

using namespace std;

void problem1(){
   int i = 1;
   int j = 2;
   int k = i + j + i++ + j++ + ++i + ++j;
   cout<<i<<","<<j<<","<<k<<endl;
}

void problem2(){
    int i = 0;
    i = i++ - --i + ++i-i--;
    cout<<i<<endl;
}

void problem3(){
    int i = 1;
    int j = 2;
    int k = 3;
    int m = i-- - j-- - k --;
    cout<<i<<","<<j<<","<<k<<","<<m<<endl;
}

void problem4(){
    int i = 10;
    int j = 20;
    int k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    cout<<i<<","<<j<<","<<k<<endl;
}

int main(){
    int a = 20;
    int b = a++;
    cout<<a<<","<<b<<endl;
    a = 20;
    b = ++a;
    cout<<a<<","<<b<<endl;
    int i = 100;
    i = i++ + ++i;
    cout<<i<<endl;
    problem1();
    problem2();
    problem3();
    problem4();
}