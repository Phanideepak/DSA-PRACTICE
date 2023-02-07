import java.io.*;
import java.lang.*;
import java.util.*;

class Matrix{

    static void spiralOrderTraversal(int [][]a, int m,int n){
        int row_start = 0; // top most row compresion
        int row_end = m-1; // bottom most row compression
        int column_start = 0; // left most column compression.
        int column_end = n-1; // right most column compression.

        // continue the loop till this condition fails : row_start<=row_end && column_start<=column_end
        int i,j=0;

        // while loop controls -> row,column compression
        // for loop controls -> row,column element printing.
        while(row_start<=row_end && column_start<= column_end){
            //Top most row printing.
            for(j = column_start;j<=column_end;j++){
                System.out.print(a[row_start][j]+" ");
            }
            row_start ++;

            // right most column compression.
            for(i = row_start; i<=row_end; i++){
               System.out.print(a[i][column_end]+" ");
            }
            column_end --;

            // bottom row printing.
            for(j = column_end; j>=column_start;j--){
               System.out.print(a[row_end][j]+" ");
            }
            row_end --;

            // left most column compression.
            for(i = row_end; i>=row_start;i--){
               System.out.print(a[i][column_start]+" ");
            }
            column_start ++;
        }
        System.out.println("end of spiral traversal");
    }

    static void transposeMatrix(int [][] a , int m, int n){
        for(int i=0;i<m;i++){
            for(int j=i;j<n;j++){
                int temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
        System.out.println("end of transpose matrix");
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();
        int [][]a = new int[m][n];

        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j]= sc.nextInt();            
            }
        }
        spiralOrderTraversal(a,m,n);
    }
}