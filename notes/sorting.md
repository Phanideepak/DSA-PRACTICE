Bubble sort:

general: Compare the adjacent elements and swap the elements if they are in a wrong order.
logic: Iterate over every element in array. Compare the current element with elements after it, if elements are in wrong order. Swap the element position. Continue this process till we reach the last element.

pseudo code 1:

for i:=0; i < n-1; i++
  for j:=i+1; j < n; j++
    if a[i]>a[j]
       swap(a[i],a[j]) 



Selection sort:

general: Find the minimum element and swap it with the beginning element of unsorted array.

pseudo code 1:

for i:=0; i < n-1; i++
  min = i
  for j:=i+1; j < n; j++
      if a[min] > a[j]
         min = j 
  swap(min,i)       



Insertion sort:

general: Insert an element from unsorted array to its position in sorted array.

pseudo code 1:

for i:=1;i<n;i++
   current = a[i]
   j = i-1
   while j>=0 && current > a[j]
     a[j+1] = a[j]
     j--
   a[j+1] = current


Merge Sort:


merge_sort(int* a, int n, int l, int r){
   if(l<r){
      mid =(l+r)/2;
      merge_sort(a,n,l,mid);
      merge_sort(a,n,mid+1,r);
      merge(a,n,l,mid,r);
   }
}

merge(int* a, int n,int l, int mid, int r){
   // create a extra space of length = r-l+1

   i pointer in first half 
   j pointer in second half
   compare a[i] and a[j] then add the smaller element to temp array.
}



Quick Sort:

unsorted: 6 3 9 5 2 8 7

quickSort(int a[], int l, int r){
   if(l<r){
      int pivot = partition(arr,l,r);
      quicksort(a,l,pivot-1);
      quicksort(a,pivot+1,r)
   }
}

partition(int a[],int l,int r){
   pivot = a[r]
   i = l - 1
   for j=l to r-1:
      if arr[j] < pivot;
           i++;
           swap(a[i],a[j]);
   swap(a[i+1],a[r]);

   return i+1;        
}


Inverion count using merge sort algo/approach: https://www.geeksforgeeks.org/inversion-count-in-array-using-merge-sort/

Pending sorting algorithms:

1. dnf sort
2. wave sort
3. 