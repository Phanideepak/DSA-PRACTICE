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

void printHalfPyramidUsingNumbers(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<"End of printHalfPyramidUsingNumbers"<<endl;
    cout<<endl;  
}

void printFloydTriangle(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<++count<<" ";
        }
        cout<<endl;
    }
    cout<<"End of printFloydTrainagle"<<endl;
    cout<<endl;
}

void printButterflyPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=1;j<=2*n-2*i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
      }
      for(int j=1;j<=2*(i-1);j++){
            cout<<"  ";
      }
      for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
      }
        cout<<endl;
    }
    cout<<"End of printButterflyPattern"<<endl;
    cout<<endl;
}

void printInvertedPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"End of printInvertedPattern"<<endl;
    cout<<endl;
}

void printZeroOnePattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1 ";
            } else {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    cout<<"End of printInvertedPattern"<<endl;
    cout<<endl;
}

void printRhombusPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"End of printRhombusPattern"<<endl;
    cout<<endl;
}

void printNumPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"End of printNumPattern"<<endl;
    cout<<endl;
}

void printPalindromePattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i;j>1;j--){
           cout<<j<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"End of printPalindromePattern"<<endl;
    cout<<endl;
}

void printStarPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }   
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*(n-i+1)-1;j++){
            cout<<"* ";
        }   
        cout<<endl;
    }
    cout<<"End of printStartPattern"<<endl;
    cout<<endl;
}

int main(){
    printRectangularPattern(5,6);
    printHollowRectangularPattern(5,6);
    printInvertedHalfPyramid(6);
    printHalfPyramidAfter180(6);
    printHalfPyramidUsingNumbers(7);
    printFloydTriangle(6);
    printButterflyPattern(6);
    printInvertedPattern(6);
    printZeroOnePattern(5);
    printRhombusPattern(4);
    printNumPattern(5);
    printPalindromePattern(6);
    printStarPattern(6);
}