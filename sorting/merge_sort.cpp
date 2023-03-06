#include<bits/stdc++.h>

using namespace std;

void merge(int a[], int l, int mid, int r){
    // create a additional space of length r-l+1
    int temp[r-l+1];

    int i=l; //i pointer of first subhalf
    int j=mid+1; // j pointer of second subhalf

    for(int z=0;z<=r-l;z++){
        if(i > mid){
            temp[z]=a[j];
            j=j+1;
        } else if(j>r){
           temp[z]=a[i];
           i=i+1;
        } else if (a[i]>a[j]){
            temp[z]=a[j]; 
            j=j+1;
        } else {
            temp[z]=a[i];
            i=i+1;
        }
    }

    for(int i=l;i<=r;i++){
        a[i] = temp[i-l];
    }
}

void mergeSort(int a[], int l, int r){
    if(l>=r){
        return;
    }

    if(l<r){
        int mid = (l+r)/2;

        // sort first subarray
        mergeSort(a,l,mid);

        // sort second subarray
        mergeSort(a,mid+1,r);

        // merge two sorted subhalfs.
        merge(a,l,mid,r);
    }
}

int main(){
   int n;
   cin>>n;
   int a[n];

   for(int i=0;i<n;i++){
       cin>>a[i];
   }

   mergeSort(a,0,n-1);

   for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
   } cout<<endl;
} 