import java.util.*;
import java.lang.*;
import java.io.*;

class NumberUtils{

    static int reverseNumber(int n){
        int reverse = 0;
        int temp = n;
        while(temp > 0){
           reverse = 10*reverse + temp%10;
           temp = temp/10; 
        }
        return reverse;
    }

    static boolean isArmStrongNumber(int n){
        int sum = 0;
        int temp = n;
        while(temp>0){
            sum = sum + (temp%10)*(temp%10)*(temp%10);
            temp = temp/10;
        }
        return sum == n;
    }

    static int sumOfNnumbers(int n){
         return n*(n+1)/2;          
    }

    static int max(int a, int b){
        return a>b ? a:b;
    }

    static boolean checkPythagerous(int a, int b, int c){
         int maxNum =  max(a,max(b,c));
         int x=0,y=0;
         if(a==maxNum){
            x = b;
            y = c;
         }
         if(b==maxNum){
            x = a; 
            y = c;
         }
         if(c == maxNum){
            x = a;
            y = b;
         }
         return x*x + y*y == maxNum * maxNum;        
    }

    static int convertBinaryToDecimal(int n){
        int num = 0;
        int multiplier = 1;
        while(n>0){
           num = num + multiplier*(n%10); 
           multiplier =  multiplier * 2;
           n = n / 10;
        }
        return num;
    }

    static int convertOctalToDecimal(int n){
        int num  = 0;
        int multiplier = 1;
        while(n>0){
            num = num + multiplier*(n%10);
            multiplier = multiplier*8;
            n = n/10;
        }
        return num;
    }

    static String convertDecimalToBinary(int n){
       String num = "";
       while(n>0){
         num = num + n %2; 
         n = n/2;
       }
       String reverse = "";
       for(int i = 0; i< num.length(); i++){
           reverse = reverse + num.charAt(num.length()-i-1);
       }
       return reverse;
    }

    static String convertDecimalToOctal(int n){
        String num = "";
        while(n>0){
            num = num + n%8;
            n = n/8;
        }
        String reverse = "";
        for(int i = 0; i< num.length(); i++){
           reverse = reverse + num.charAt(num.length()-i-1);
        }
       return reverse;
    }

    static String convertDecimalToHexal(int n){
        String num  = "";
        while(n>0){
            if(n%16 > 9)
               num = num + (char)('a' + n%16-10);
            else 
               num = num + n % 16;
            
            n = n / 16;
        }
        String reverse = "";
        for(int i = 0; i< num.length(); i++){
           reverse = reverse + num.charAt(num.length()-i-1);
        }
        return reverse;
    }

    static int convertHexalToDecimal(String n){
        int num = 0;
        int x = 1;
        for(int i=n.length()-1;i>=0;i--){
           if(n.charAt(i) == 'a')
             num = num + x*10;
           else if(n.charAt(i) == 'b')
             num = num + x*11;
           else if(n.charAt(i) == 'c')
             num = num + x*12;
           else if(n.charAt(i) == 'd')
            num = num + x*13;
           else if(n.charAt(i) == 'e')
            num = num + x*14;
           else if(n.charAt(i) == 'f')
            num = num + x*15;
           else
            num = num + (n.charAt(i) - '0')*x;   
           x= x*16;
        }
        return num;
    }

    static int addTwobinaryNumber(int a, int b){
        int carry = 0;
        int ans = 0;
        while(a > 0 && b >0){
            if(a%2==0 && b %2==0){
                ans = ans*10+carry;
                carry = 0;
            }
            else if ((a%2==0 && b %2==1) && (a%2==1 && b%2 ==0)){
                if(carry == 1){
                    ans = ans*10 + 0;
                    carry = 1;
                } else {
                    ans = ans * 10 + 1;
                    carry = 0;
                }
            } else {
                ans = ans*10 + carry;
                carry = 1;
            }
            a = a/10;
            b = b/10;
        }
        return ans;       
    }


    public static void main(String[] args){
        System.out.println(reverseNumber(4567));
        System.out.println(isArmStrongNumber(153));
        System.out.println(sumOfNnumbers(20));
        System.out.println(checkPythagerous(12,2,13));
        System.out.println(convertBinaryToDecimal(10110));
        System.out.println(convertOctalToDecimal(125));
        System.out.println(convertOctalToDecimal(215));
        System.out.println(convertDecimalToBinary(64));
        System.out.println(convertDecimalToOctal(45)); 
        System.out.println(convertDecimalToHexal(45));
        System.out.println(convertHexalToDecimal("2d"));
        System.out.println(addTwobinaryNumber(1110,1001));      
    }
}
