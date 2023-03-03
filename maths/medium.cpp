#include<bits/stdc++.h>

using namespace std;

int sumFirst(int n){
    int sum =0;
    for(int i=1;i<=n;i++) sum = sum + i ;
    return sum;
}

void checkPythagerousTriplet(int x, int y, int z){
    int maxNum = max(x,max(y,z));
    int a,b;
    if(x == maxNum){
         a = y;
         b =z;
    } else if (y == maxNum){
       a=x;
       b= z;
    } else {
        a = x;
        b = y;
    }
    if(maxNum*maxNum == (a*a+ b*b)){
        cout<<"pythagerous triplet"<<endl;
    } else {
        cout<<"nO TRIPLET"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<"sum of first n numbers: "<<sumFirst(n)<<endl;
    checkPythagerousTriplet(12,5,13);
}