#include<bits/stdc++.h>

using namespace std;

int sum(int* array, int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + array[i];
    }
    return sum;
}

int search(int * array,int n,int key){
    int found = -1;

    for(int i=0; i <n; i++){
        if(array[i] == key){
            found = i;
            break;
        }
    }

    return found;
}

int main(){
    int n,key;
    cin >> n;

    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cin >> key;
    cout<<"sum: "<<sum(array,n)<<endl;

    int found = search(array,n,key);

    if (found > 0)
      cout<<"element found at index :"<<search(array,n,key)<<endl;
    else
      cout<< "element not found "<<endl;
}