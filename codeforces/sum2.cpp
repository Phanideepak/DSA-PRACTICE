#include<bits/stdc++.h>

using namespace std;

void printRating(int n){
    if(n<=1399){
        cout<<"Division 4"<<endl;
    }
    else if(n>1399 && n<1600){
        cout<<"Division 3"<<endl;    
    }
    else if(n>=1600 && n<1900){
        cout<<"Division 2"<<endl;
    } else {
        cout<<"Division 1"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        printRating(a[i]);
    }

}