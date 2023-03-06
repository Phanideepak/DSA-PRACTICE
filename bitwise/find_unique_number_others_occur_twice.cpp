#include<bits/stdc++.h>

using namespace std;

/*
*  Problem Statement.  
*  Find the unique number in the array where all the elements except one occur twice.
*/

/*
*  Approach:  Xor of an number with itself is zero and Xor of an number with zero is number itself.
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

    cout<<"answer : "<<xorSum<<endl;
}