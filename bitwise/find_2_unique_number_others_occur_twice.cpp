#include<bits/stdc++.h>

using namespace std;



/**
 * Optimised bitmask approach
*/

vector<int> singleNumber(vector<int>& nums) {
        unsigned int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = sum ^ nums[i];
        }
        int setBit = sum & (-1*sum);
        int f=0;
        int s=0;
        for(int i=0;i<nums.size();i++){
            if((setBit&nums[i])>0){
                f=f^nums[i];
            } else {
                s=s^nums[i];
            } 
        } 
        
        vector<int> o;
        o.push_back(f);
        o.push_back(s);
        return o;
}


int getBit(int n, int posIndex){
    return (n & (1<<posIndex))>0;
}

/*
*  Problem Statement.  
*  Find the two unique numbers in the array where all the elements except two occur twice.
*/

/*
*  Approach:  
* 1. resultant Xor sum of all the array elements = Xor of two required elements.
* 2. Find the right most bit of above xor sum
* 3. firstNumber is equal to xor sum of array elements consisting of above right most bit
* 4. secondNumber is equal to xor  of firstNumber with resultant xor sum        
*/

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    int xorSum = 0;

    for (int i=0;i<n;i++){
        xorSum = xorSum ^ a[i];
    }

    int temp = xorSum;

    int pos_index = -1;
    while(temp > 0){
        pos_index = pos_index+1;
        if(temp%2 == 1) break;
        temp = temp/2;
    }
    int first = 0;

    for(int i=0;i<n;i++){
        if(getBit(a[i],pos_index)){
            first = first ^ a[i];
        }
    }
    cout<<"first Number: "<<first<<endl;
    cout<<"second number: "<<(first ^ xorSum)<<endl;   
}