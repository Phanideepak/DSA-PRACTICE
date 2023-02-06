import java.io.*;
import java.lang.*;
import java.util.*;

class BinarySearch{


    static int binarySearch(int[] a, int l, int r, int key){
        while(l<=r){
           int mid = (l+r)/2;
           System.out.println(String.format("(l,r,mid) in Iteration = (%s,%s,%s)",l,r,mid));
           if(a[mid] == key) return mid;
           else if(a[mid] > key) r = mid-1;
           else l =mid+1;
        }
        System.out.println("Element not found");
        return -1;
    }

    public static void main(String[] args){
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int [] a = new int[n];

        for(int i=0;i<n;i++)
           a[i] = sc.nextInt();
        
        int key = sc.nextInt();

        System.out.println(binarySearch(a,0,n-1,key));   
    }
}