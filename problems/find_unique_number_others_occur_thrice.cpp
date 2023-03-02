#include<bits/stdc++.h>

using namespace std;

int getBit(int n, int posIndex){
    return (n & (1 << posIndex)) > 0;
}

/**
 *  Problem statement: All the elements except one occur thrice in an array. Find out that unique number.
 
 *  Solution:
 * 1. Create a frequency array of size 64 that holds the frequency of setbits at a particular index position for 
 *    all the array elements.
 * 2. If frequency at a index is not divisible by 3 then setbit at that index belongs to unique number.
 * 3. Unique number can be formed by setting the identified setbits.
 * Logic: answer = answer | 1<< p (p is the position where desired setbit is identified)
 

 * Logic 1: answer = answer + 1<<p. 
 * Failed: Logic 1 fails due to memory over flow issues. 
*/

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++){
       cin>>a[i];
    }
    int answer = 0;
    for(int i=0;i<64;i++){
        int frequency = 0;
        for(int j=0;j<n;j++){
           if(getBit(a[j],i)){
               frequency = frequency + 1;
             }
        }
        if(frequency%3 !=0){
            answer = answer | (1<<i);
        }
    }
    cout<<answer<<endl;
}