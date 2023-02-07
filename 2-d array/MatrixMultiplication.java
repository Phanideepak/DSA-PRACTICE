import java.util.*;
import java.io.*;
import java.lang.*;

class MatrixMultiplication{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int m=sc.nextInt(),n=sc.nextInt(),p=sc.nextInt();
        int [][] a = new int[m][n];
        int [][] b = new int[n][p];
        int [][] c = new int[m][p];

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j]= sc.nextInt();
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<p;j++){
                b[i][j] = sc.nextInt();
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<p;j++){
                c[i][j] = 0;
                for(int k=0;k<m;k++){
                    c[i][j] = c[i][j]+ a[i][k]*b[k][j];
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<p;j++){
               System.out.print(c[i][j]+" "); 
            }
            System.out.println();
        }
    }
}