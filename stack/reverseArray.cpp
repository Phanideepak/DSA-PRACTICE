#include<bits/stdc++.h>
#define swap(a,b){a=a+b-(b=a);}

using namespace std;


using namespace std;

int main(){
    int a[] = {11,22,44,55,34,98,97,65,59};
    int n = 9;

    for(int i=0;i<n/2;i++){
        swap(a[i],a[n-i-1]);
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}