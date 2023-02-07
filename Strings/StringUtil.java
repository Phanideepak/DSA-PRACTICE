import java.io.*;
import java.util.*;
import java.lang.*;

class StringUtil{
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        String inputString = sc.nextLine();
        boolean isCheckPalindrome = true;
        for(int i=0;i<inputString.length();i++){
            if(inputString.charAt(i) != inputString.charAt(inputString.length()-i-1)){
                isCheckPalindrome = false;
                break;
            }
        }
        System.out.println("isCheckPalindrome : "+isCheckPalindrome);
    }
}