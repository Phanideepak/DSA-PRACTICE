#include<bits/stdc++.h>

using namespace std;

int setBit(int n, int posIndex){
    return n | (1<<posIndex);
}

int getBit(int n, int posIndex){
    int result = n & (1<<posIndex);
    return result > 0;
}

int main(){
    int n=5;
    cout<<setBit(n,1)<<endl;
    
    cout<<getBit(n,2)<<endl;

    cout<<getBit(n,0)<<endl;
    cout<<getBit(n,1)<<endl;
}