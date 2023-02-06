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

    public static void main(String[] args){
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int []a = new int[n];

        for(int i = 0; i<n;i++){
            a[i] = sc.nextInt();
        }

        selectionSort(a,n);
    }
}