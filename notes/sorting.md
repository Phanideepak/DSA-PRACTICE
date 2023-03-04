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