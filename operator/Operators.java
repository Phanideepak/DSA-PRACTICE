import java.lang.*;

import java.util.*;

class Operators{
    static void problem1(){
        int i = 40;
        int j = ++i;
        System.out.println(j);
        int k = i++;
        System.out.println(k);
        System.out.println("end of problem 1 - i :"+i);
    }

    static void problem2(){
        int i = 20;
        // i = 21, 22
        i = i++ + ++i;
        System.out.println("end of problem2 - i: "+i);
    }

    static void problem3(){
        int i = 20;
        int j = 40;
        int k = i + j + i ++ + j ++ + ++i + ++j;
        System.out.println(String.format("problem 3 - i : %s j: %s  k: %s",i,j,k));
    }

    static void problem4(){
        int i  = 10;
        int j = 20;
        int k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
        System.out.println(String.format("problem 4 - i : %s  j:%s  k: %s",i,j,k));
    }

    public static void main(String[] args){
         problem1();
         problem2();
         problem3();
         problem4();
    }
}