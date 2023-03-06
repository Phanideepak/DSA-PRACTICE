#include<bits/stdc++.h>

using namespace std;

long long countInversionsMerged(int a[], int l,int r,int mid){
    long long inv =0;
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
            // if a[i] has inversion, then other elements in first sub array 
            // greater than a[i] will have inversion with a[j]
            inv = inv + (mid-l+1-i);
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
    return inv;
}

long long countInversions(int a[], int l, int r){
    long long inv = 0;
    if(l<r){
       int mid =(l+r)/2;
       inv += countInversions(a,l,mid);
       inv += countInversions(a,mid+1,r);

       inv += countInversionsMerged(a,l,r,mid);
    }
    return inv;
}

int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<countInversions(a,0,n-1)<<endl;
}