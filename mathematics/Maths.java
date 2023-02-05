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

    public int numberFactors(int n){
        int count =0;
        
        for(int i=1;i<=n;i++) if(n%i==0) count = count + 1;
        
        return count;
    }

    // outdate and noob logic.
    public void checkPrime(int n){
        int count = 0;
        for(int i = 1; i<=n;i++){
            if(n%i == 0) count = count + 1;
        }
    
        if(count == 2) {
           System.out.println("Prime number");
        } else if (count == 1) {
            System.out.println("given number is one");     
        } else {
           System.out.println("composite number");
        }
    }

    public void checkPrimeOrNot(int n){
        int i;

        for(i = 2; i<n;i++){
            if(n%i == 0){
                System.out.println("non prime");
            }
        }
        if(i == n){
            System.out.println("prime");
        }
    }

    public void printPrimes(int a, int b){
       for(int num = a; num<=b ; num++){
           int i;
           for(i = 2; i <num;i++){
              if(num % i ==0) {
                break;
              }
           }
           if(i == num ){
               System.out.println("Prime number: "+i);
           }
       }   
    }

    public static void main(String[] args){
        Maths m = new Maths();
        System.out.println(m.greaterFive(22,21,88,88,87));
        m.checkEven(456802);

        System.out.println("factorial : "+m.factorial(30));
        System.out.println("fibonacci : "+ m.fibonacci(10));
        System.out.println("number of factors : "+m.numberFactors(720));
        m.checkPrimeOrNot(1117);
        m.printPrimes(1,100);
    }
}