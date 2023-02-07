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
    
    /**Create an array index[max_element], store the first occurences of element in that array. 
       on second occurnce, store the first occurence value in answer variable.
       answer = min(answer)
    **/
    static void find_first_repeating_element(int[] arr, int n){
        System.out.println("find_first_repeating_element");
        int answer = Integer.MAX_VALUE;
        int max_element = Integer.MIN_VALUE;
        for(int i =0;i<n;i++){
            if(arr[i] > max_element) max_element = arr[i];
        }
        int []index = new int[max_element+1];
        for(int i=0;i<=max_element;i++){
            index[i] = -1;
        }
        for(int i =0;i<n;i++){
             if(index[arr[i]] < 0){
                index[arr[i]] = i;
             } else {
                if(answer > index[arr[i]])
                   answer = index[arr[i]];
             }
        }
        System.out.println("answer : "+answer);

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

    /** optmised.
     * Important.
     */
    static void subarray_with_given_sum(int[] arr, int n, int sum){
        System.out.println("subarray_with_given_sum");
        int i,j = 0;
        int total = 0;
    }

    static void find_missing_positive_number(int[] arr, int n){
        int max = Integer.MIN_VALUE;
        for(int i = 0; i<n;i++){
            if(arr[i] > 0 && arr[i] > max){
                max = arr[i];
            }
        }
        int [] check = new int[max+1];

        for(int i = 1; i<= max;i++){
            check[i] = 0;
        }

        for(int i =0; i<n;i++){
            if(arr[i]>0){
                check[arr[i]] = 1;
            }
        }

        for(int i =1;i<=max;i++){
            if(check[i]==0){
                System.out.println("answer: "+i);
                break;
            }
        }
    }

    static void printPossibleSubArrays(int[] arr, int n){
       System.out.println("printPossibleSubArrays"); 
       for(int i = 0;i<n;i++){
          for(int j = i; j<n;j++){
             for(int k = i; k<=j; k++){
                System.out.print(arr[k]+" "); 
             }
             System.out.println();
          }
       }
    }

    static void findSubArraywithMaximumSum(int [] arr , int n){
        System.out.println("findSubArraywithMaximumSum");
                
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] arr = new int[n];
        for(int i = 0;i<n;i++) arr[i] = sc.nextInt();
        /*
        print_max_till_ith(arr,n);
        print_sum_of_each_subarray(arr, n);
        longest_arthimetic_subarray(arr,n);
        count_element_greater_than_previous_elements_and_following(arr,n);
        find_first_repeating_element(arr,n);
        subarray_with_given_sum(arr,n,40); */
        //find_missing_positive_number(arr,n);
        //printPossibleSubArrays(arr,n);
    }
}