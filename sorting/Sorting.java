import java.util.*;
import java.lang.*;
import java.io.*;

class Sorting{

    static void selectionSort(int [] a,int n){

        for(int i = 0;i<n-1; i++){
            int min_index = i;
            for(int j = i+1; j<n;j++){
                if(a[j] < a[min_index]){
                   min_index = j;
                }
            }
            if(min_index != i){
                int temp = a[i];
                a[i] = a[min_index];
                a[min_index] = temp;
            }
        }

        for(int i = 0; i<n; i++){
           System.out.print(a[i]+" ");
        }
        System.out.println();
    }

    static void bubbleSort(int [] a , int n){
        // This algo always runs for O(n*n)
        for(int i =0; i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    int temp = a[i];
                    a[i] =  a[j];
                    a[j] = temp;
                }
            }
        }

        for(int i = 0; i<n; i++){
           System.out.print(a[i]+" ");
        }
        System.out.println();
    }

    static void bubbleSortOptimised(int[] a, int n){
        boolean swap;
        for(int i=0;i<n-1;i++){
            swap = false;
            for(int j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    swap = true;
                }
            }
            if(!swap) break;
        }

        for(int i = 0; i<n; i++){
           System.out.print(a[i]+" ");
        }

        System.out.println();
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];

        for(int i = 0 ;i<n;i++){
            a[i] = sc.nextInt();
        }
        
        bubbleSortOptimised(a,n);
    }
}