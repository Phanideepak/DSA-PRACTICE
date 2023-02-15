#include<bits/stdc++.h>
using namespace std;

int isOneBitExists(int n, int pos){
    return (n & 1<<pos) !=0;
}

/*
*  Find unique number in array where all numbers except one are present twice.
*/
int findUniqueNumberInArray(int arr[], int n){
    cout<<"findUniqueNumberInArray"<<endl;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum ^ arr[i];
    }
    return sum;
}

/*
  Find two unique number in array where all numbers except those two are present twice
*/

/*
*  Logic:

*  1. Find xor sum of all the elements in array.
*  2. Find right most set (1) bit in the xorsum.
*  3. OneNumber = xor sum of the numbers containing above right most set bit
*  4. second number = total xor sum ^ OneNumber 
*/

void findTwoUniqueNumberInArray(int arr[], int n){
    cout<<"code entry point";
    int totalSum = 0;
    for(int i=0;i<n;i++){
        totalSum =  totalSum ^ arr[i];
    }
    int setbit=0;
    int pos_index=-1;
    while(setbit == 0){
       pos_index++;
       setbit = totalSum &  1 << pos_index; 
    }
    cout<<"pos_index: "<<pos_index<<endl;
    int firstNumber = 0;
    for(int i=0;i<n;i++){
        if(isOneBitExists(arr[i],pos_index)){
            firstNumber = firstNumber ^ arr[i];
        }
    }
    int secondNumber = totalSum ^ firstNumber;

    cout<<"firstNumber : "<<firstNumber<<"secondNumber : "<<secondNumber<<endl;
}


/*
  Find unique number in array where all numbers except those one are present thrice
*/

/*
*  Logic:

*  1. Create an frequency array of size 64 that holds frequency of setbit(1) belongs to array(size n) elements
*  2. If frequency is divisible by 3, It means that setbit is repeated thrice. Ignore that setbit.
      Else answer = answer | (1<<pos_index)
*  3. print(answer)
*  
*/

void findUniqueNumberInArrayRepeatedThrice(int arr[], int n){
    cout<<"code entry point";
    int num = 0;
    int frequency = 0;

    for(int i=0;i<64;i++){
        frequency=0;
        for(int j=0;j<n;j++){
            if(isOneBitExists(arr[j],i)){
                frequency++;
            }
        }
        // If frequency is not divisble by 3, then setbit at position i is considered.
        if(frequency%3 !=0) {
            num = num | (1<<i);
        }
    }
    cout<<"answer: "<<num<<endl;    
      
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    //cout<<findUniqueNumberInArray(arr,n)<<endl;
    //findTwoUniqueNumberInArray(arr,n);

    findUniqueNumberInArrayRepeatedThrice(arr,n);
}