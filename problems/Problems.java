import java.util.*;
import java.lang.*;
import java.io.*;

class Problems{

    static void print_max_till_ith(int[] arr , int n){
        System.out.println("print_max_till_ith");
        /**
           t1 = 1 0 5 4 6 8, o1 = 1 1 5 5 6 8
           t2 = 1 2 6 8 9 3 4 10 5 , o1 = 1 2 6 8 9 9 9 10 10
         */
        int max = Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
           if(arr[i]>max) max = arr[i];
           System.out.print(max+" ");
        }
        System.out.println();
    }
    
    static void print_sum_of_each_subarray(int[] arr , int n){
        System.out.println("print_sum_of_each_subarray");
        int sum = 0;
        String subarray = "";
        for(int i =0;i<n;i++){
            sum  = 0;
            subarray = "";
            for(int j = i; j <n; j++){
                sum = sum + arr[j];
                subarray = subarray + arr[j]+" ";
                System.out.println(String.format("subarray: %s and sum is %s",subarray,sum));
            }
        }       
    }

    static void longest_arthimetic_subarray(int[] arr, int n){
        System.out.println("longest_arthimetic_subarray");
        int diff = arr[0]-arr[1];
        int ans = 2 ; // base value.
        int max = 2;
        for(int i = 2; i<n;i++){
            if(arr[i-1]-arr[i] == diff){
               ans = ans + 1;
               if(ans > max) max = ans;
            } else {
               diff = arr[i-1]-arr[i]; 
               ans = 2;
            }
        }
        System.out.println("answer : "+ max);
    }

    static void find_first_repeating_element(int[] arr, int n){
        System.out.println("find_first_repeating_element");
        
    }

    static void count_element_greater_than_previous_elements_and_following(int[] a , int n){
        System.out.println("count_element_greater_than_previous_elements_and_following");
        int count  = 0;
        int [] arr = new int[n+1];
        int max = Integer.MIN_VALUE;
        for(int i = 0; i < n; i++){
           arr[i] = a[i];
        }
        arr[n] = Integer.MIN_VALUE;
        for(int i = 0 ; i<n;i++){
            if(arr[i] > max && arr[i] > arr[i+1]) count ++;
            if(max > arr[i]) max = arr[i];   
        }
        System.out.println("count :"+count);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] arr = new int[n];
        for(int i = 0;i<n;i++) arr[i] = sc.nextInt();
        print_max_till_ith(arr,n);
        print_sum_of_each_subarray(arr, n);
        longest_arthimetic_subarray(arr,n);
        count_element_greater_than_previous_elements_and_following(arr,n);
        find_first_repeating_element(arr,n);
    }
}