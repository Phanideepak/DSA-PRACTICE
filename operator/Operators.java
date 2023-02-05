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
    public static void main(String[] args){
         problem1();
    }
}