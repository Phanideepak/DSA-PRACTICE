Array: List of variables of same data type. Data stored in continuous blocks of memory.

Subarray: It is contiguous part of the array. Subarray contains start index and end index.  
     -> Number of ways of selecting tuples (start_index,end_index) where start_index< end_index = nc2
     -> No of ways of selecting single element subarrays = n;
     -> No of subarrays = nc2 + n = n*(n+1)/2.

Sub sequence: It is formed by selecting zero or more elements without changing the order of remaining          elements.  
         -> No of sub sequence = nc0 + nc1 + .....+ncn = 2 power n.

Note: Every sub array is sub set of sub sequence.
