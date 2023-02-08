#include<bits/stdc++.h>

using namespace std;


int divisibleBy(int a, int b, int x,int y){
    int count = 0;
    for(int i=a; i<=b;i++){
        if(i%x==0){
            count = count + 1;
            continue;
        }
        if(i%y ==0){
            count = count+1;
        } 
    }
    return count;
}

int main(){
    int a,b;
    cin>>a>>b;
    int x,y;
    cin>>x>>y;
    cout<<divisibleBy(a,b,x,y)<<endl;
}