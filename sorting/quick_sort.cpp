#include<bits/stdc++.h>
#define swap(a,b) {a=a+b-(b=a);}

using namespace std;

int partition(int a[], int l, int r){
    int pivot = a[r];
    int i = l-1; // left side index
    for(int j=l;j<=r-1;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}

void quickSort(int a[],int l, int r){
    if(l>=r){
        return;
    }
    if(l<r){
        //pivotIndex
        int pivot = partition(a,l,r);
        quickSort(a,l,pivot-1);
        quickSort(a,pivot+1,r);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    quickSort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}

