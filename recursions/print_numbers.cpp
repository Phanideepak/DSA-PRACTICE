#include<bits/stdc++.h>

using namespace std;

void print_increment(int n){
   if(n==1){
     cout<<"print increment sequence:"<<endl;
     cout<<n<<endl;
     return;
   }
   print_increment(n-1);
   cout<<n<<endl;   
}

void print_decrement(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print_decrement(n-1);
}

int main(){
    int n;
    cin>>n;
    print_increment(n);
    print_decrement(n);
}