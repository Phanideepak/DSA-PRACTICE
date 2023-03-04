#include<bits/stdc++.h>

using namespace std;

int main(){
    int a = 20;
    int *b = &a; // pointer refers to the address of a.

    cout<<b<<endl; // address of a

    cout<<*b<<endl; // directing to a pointer will give you value at address.

    int **c = &b; // pointer to pointer.

    cout<<*c<<endl;
    cout<<**c<<endl;

    int arr[]={1,2,3,4,5};
    cout<<arr<<endl; // refers to element at index 0
    cout<<*arr<<endl; // directs to the element and return element at index 0
    cout<<*(arr+2)<<endl; //directs to element and return element at index 2.

    *arr = *arr+22;
    cout<<arr[0]<<endl;
}