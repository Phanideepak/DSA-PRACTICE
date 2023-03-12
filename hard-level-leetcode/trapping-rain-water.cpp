#include<bits/stdc++.h>

using namespace std;

/***
 * Problem statement: Given non negative integers represent an elevation map where
 *        width of each bar is 1. Compute how much water it can trap after raining?     
*/

/***
 *  Brute force approach: https://www.youtube.com/watch?v=BsPbCLj4_Mw&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=85
 * 
*/

/**
 * stack approach:
 * 1. For decreasing elevations, rain water will be spilled out till increased elevation occurs.
 *    Increased elevation will create the container. Area of container gives u amount of water trapped.
 * 2. Calculate the area of possible containers till you reach end of array.   
 * 
*/

int trap_rain_water(vector<int> a){
    stack<int> s;
    int ans = 0;
    for(int i=0;i<a.size();i++){
        while(!s.empty()&&a[s.top()]<a[i]){
             int current = s.top();
             s.pop();
             if(s.empty()) break;
             int width = i-s.top()-1;
             // current elevation scenario 
             // Case 1: previous elevation < next elevation (*3, current=*2, **6)
             // case 2: previous elevation > next elevation (*5, current=*3, *2, **6)
             ans = ans + (min(a[s.top()],a[i])-a[current])*width; 
        }
        s.push(i);
    }
    return ans;
}

int main(){

}