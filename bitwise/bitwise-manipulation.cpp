#include<bits/stdc++.h>

using namespace std;

int getBit(int n, int pos_index){
    return (n & (1<<pos_index))!=0;
}

int setBit(int n, int pos_index){
    return (n | 1<<pos_index);
}

int clearBit(int n, int pos_index){
    int mask = ~(1<<pos_index);
    return n & mask;
}

int updateBit(int n,int pos_index, int val){
    int mask = ~(1<<pos_index);
    n = n & mask;
    return n |(val<<pos_index);
}

/* n = 8 (1000)
   n-1 = 7 (0111)
   In bitwise representation, (n&n-1) = (0000) have same bits compared to n except left significant digits.
*/
bool checkNumberIsPowerOf2(int n){
    return n&!(n&n-1);
}

bool checkCountNoOfOnes(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}

void subsets(int a[],int n){
   for(int i =0; i<(1<<n); i++){
      for(int j=0;j<n;j++){
          if(i & (1<<j)){
            cout<<a[j]<<" ";
          }
      }
      cout<<endl;
   }
}

int main(){
    int n;
    cin>>n;
    cout<<getBit(n,2)<<endl;
    cout<<setBit(n,3)<<endl;
    cout<<clearBit(n+2,2)<<endl;
    cout<<checkNumberIsPowerOf2(n)<<endl;
    cout<<checkCountNoOfOnes(n)<<endl;
}