#include<bits/stdc++.h>

using namespace std;

void primesBetween(int a, int b){
    for(int i=a;i<=b;i++){
        int count = 0;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                count ++;
            }
        }
        if(count==0 && i !=1){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

void fibonacci(int n){
    int a = 0; // f(0)
    int b = 1; // f(1)
    int c = 0;
    for(int i=2;i<=n;i++){
        c = a + b; // f(i)=f(i-1)+f(i-2)
        a = b; // f(i-2) = f(i-1)
        b = c; // f(i-1) = f(i)
    }
    cout<<"fibonacci term: "<<c<<endl; 
}

void factorial(int n){
    int a = 1;
    cout<<"factorial: ";
    if(n==0){
       cout<<1<<endl;
       return;
    }
    for(int i=1;i<=n;i++){
        a = a * i;
    }
    cout<<a<<endl;
}

int fact(int n){
    int a = 1;
    if(n==0){
       return 1;
    }
    for(int i=1;i<=n;i++){
        a = a * i;
    }
    return a;
}

void calculateNCR(int n, int r){
    int sum = 1;
    for(int i=n-r+1;i<=n;i++){
        sum = sum * i;
    }
    cout<<"total: "<<sum/fact(r)<<endl;
}

void printPasacalTriangle(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" "; 
        }
        cout<<endl;
    }
    cout<<"print pascal traingle"<<endl;
}


int main(){
  primesBetween(1,100);
  fibonacci(12);   
  factorial(10);
  calculateNCR(7,3);
  calculateNCR(7,2);
  printPasacalTriangle(8);
}