#include<bits/stdc++.h>

using namespace std;

void reverseNumber(int n){
    int temp = n;
    int sum = 0;
    while(temp > 0 ){
        sum = 10*sum + (temp%10);
        temp = temp/10;
    }
    cout<<"reverse number: "<<sum<<endl;
}

void isPrime(int n){
    if(n == 1){
        cout<<"Number is one"<<endl;
        return;
    }
    int count = 0;
    for(int i=2;i<=n;i++){
       if(n%i==0){
          count++;
       }
    }
    if(count == 1){
       cout<<"Number is prime"<<endl;
    } else {
       cout<<"Number is composte"<<endl;
    }
}

void checkArmstrong(int n){
    int sum = 0;
    int temp = n;
    while(n>0){
        sum = sum + (n%10)*(n%10)*(n%10);
        n=n/10;
    }   
    if(sum == temp){
        cout<<"Armstrong"<<endl;
        return;
    }
    cout<<"Non armstrong"<<endl;
}

int main(){
    int n;
    cin >> n;
    isPrime(n);
    reverseNumber(n);
    checkArmstrong(n);
}