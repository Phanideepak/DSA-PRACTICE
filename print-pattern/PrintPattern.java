import java.io.*;
import java.lang.*;
import java.util.*;

class PrintPattern{

    static void pattern1(){
        int n = 5;
        int m = 7;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }

    static void hollowReactangularPattern(){
        System.out.println();
        System.out.println();
        int n = 5;
        int m = 7;
        for(int i=1; i<=n;i++){
            for(int j=1; j<=m;j++){
                if(i==1 || i == n){
                    System.out.print("*");
                } else if (j==1 || j==m){
                  System.out.print("*");
                }else{
                    System.out.print("@");
                }
            }
            System.out.println();
        }
    }

    static void halfInvertedPyramid(){
        System.out.println();
        System.out.println();
        int n = 5;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
              System.out.print("*");
            }
            System.out.println();
        }
    }

    static void halfPyramidAfter180(){
        System.out.println();
        int n = 5;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
               // restrict j upperbound
               if(j <= n-i)
                System.out.print(" ");
               else 
                System.out.print("*");
            }
            System.out.println();
        }
    }

    static void halfPyramidUsingNumbers(){
        int n = 6;
        System.out.println();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
               System.out.print(i);
            }
            System.out.println();
        }
    }

    static void floydTraingle(){
        int n = 6;
        System.out.println();
        int count = 0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                count = count + 1;
                System.out.print(count+" ");
            }
            System.out.println();
        }
    }

    public static void butterFlyPattern(){
        int n = 4;
        // max row size = 2*n, min row size = 2 *n
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }

            for(int j=1;j<=2*n-2*i;j++){
                System.out.print(" ");
            }

            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
            System.out.println();
        }

        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }

            for(int j=1;j<=2*n-2*i;j++){
                System.out.print(" ");
            }

            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
        
    }

    static void invertedPattern(){
        int n = 7;
        System.out.println();
        for(int i = 1;i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
               System.out.print(j+" ");
            }
            System.out.println();
        }
    }

    static void zeroOnePattern(){
        int n=6;
        System.out.println();
        for(int i=1; i<=n;i++){
            for(int j=1;j<=i;j++){
                if((i+j)%2==0) System.out.print(1+" ");
                else System.out.print(0+" ");
            }
            System.out.println();
        }
    }

    static void rhombusPattern(){
        int n = 5;
        System.out.println();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                System.out.print(" ");
            }
            for(int j=1;j<=n;j++){
                System.out.print("*");
            }
            for(int j=1;j<=i-1;j++){
                System.out.print(" ");
            }
            System.out.println();
        }
    }

    static void numberPattern(){
        int n = 5;
        System.out.println();

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++){
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }

    static void palindromicPattern(){
        int n = 5;
        System.out.println();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                System.out.print("  ");
            }
            for(int j=i;j>=2;j--){
               System.out.print(j+" ");
            }
            for(int j=1;j<=i;j++){
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }

    static void starPattern(){
        int n = 6;
        System.out.println();
        for(int i=1; i<=n; i++){
            for(int j=1;j<=n-i;j++){
               System.out.print("  ");
            }
            for(int j=1;j< 2*i; j++){
                System.out.print("* ");
            }
            System.out.println();
        }

        for(int i=n; i> 0; i--){
            for(int j=1;j<=n-i;j++){
               System.out.print("  ");
            }
            for(int j=1;j< 2*i; j++){
                System.out.print("* ");
            }
            System.out.println();
        }

    }

    static void zigZagPattern(){
        int n =3;
    }

    public static void main(String[] args){
        pattern1();
        hollowReactangularPattern();
        halfInvertedPyramid();
        halfPyramidAfter180();
        halfPyramidUsingNumbers();
        floydTraingle();
        butterFlyPattern();
        invertedPattern();
        zeroOnePattern();
        rhombusPattern();
        numberPattern();
        palindromicPattern();
        starPattern();
        zigZagPattern();
    }
}