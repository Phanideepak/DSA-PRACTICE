import java.io.*;
import java.lang.*;

class Maths{

    public int max(int a, int b){
           return a > b ? a: b;
    }

    public int greaterFive(int a, int b, int c, int d, int e){
        return max(max(a,b),max(max(c,d),e));
    }

    public void checkEven(int n){
        if(n%2 == 0)
          System.out.println("even  number");
        else 
         System.out.println("odd number");
    }

    public long factorial(int n){
        long []a = new long[n+1];
        a[0] = 1;
        for(int i=1;i<=n;i++) a[i] = i*a[i-1];

        return a[n]; 
    }

    public long fibonacci(int n){
        int []a = new int[n+1];
        a[0] = 0;
        a[1] = 1;
        for(int i=2;i<=n;i++) a[i] = a[i-1] + a[i-2];

        return a[n]; 
    }

    public static void main(String[] args){
        Maths m = new Maths();
        System.out.println(m.greaterFive(22,21,88,88,87));
        m.checkEven(456802);

        System.out.println("factorial : "+m.factorial(30));
        System.out.println("fibonacci : "+ m.fibonacci(10));
    }
}