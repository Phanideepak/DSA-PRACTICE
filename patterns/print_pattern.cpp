#include<bits/stdc++.h>

using namespace std;


void printRectangularPattern(int m, int n){
    for(int i = 0; i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<"End of printRectangularPattern"<<endl;
    cout<<endl;
}

void printHollowRectangularPattern(int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i == m-1){
               cout<<"* ";
            } else if( j==0 || j==n-1){
               cout<<"* ";
            } else {
               cout<<"  ";
            }
        }
        cout<<endl;
    }
    cout<<"End of printHollowRectangularPattern"<<endl;
    cout<<endl;
}

void printInvertedHalfPyramid(int n){
    for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
          cout<<"* ";
       }
       cout<<endl; 
    }
    cout<<"End of printInvertedHalfPyramid"<<endl;
    cout<<endl;
}

void printHalfPyramidAfter180(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"End of printHalfPyramidAfter180"<<endl;
    cout<<endl;
}

int main(){
    printRectangularPattern(5,6);
    printHollowRectangularPattern(5,6);
    printInvertedHalfPyramid(6);
    printHalfPyramidAfter180(6);
}