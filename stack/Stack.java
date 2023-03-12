import java.io.*;
import java.util.*;

class  Stack<T> {
    int top;
    T arr[];
    int capacity;

    Stack(int n){
        this.top  =-1;
        arr = (T[]) new Object[n];
        capacity =  n;
    }

    boolean isEmpty(){
        return top==-1;
    }

    T top(){
        if(!isEmpty()){
            return arr[top];
        }
        throw new RuntimeException("Not allowed");
    }

    void pop(){
        if(!isEmpty()){
            top = top - 1;
        }
    }

    void push(T x){
       if(top==capacity-1){
           System.out.println("Full stack");
       } else {
           top = top + 1;
           arr[top] = x;
       }
    }

    void printStack(){
        if(!isEmpty()){
            int n = top + 1;
            for(int i=n;i>=0;i--){
                System.out.print(arr[i]+" ");
            }System.out.println();
        }
    }

    void reverseStack(){
        if(!isEmpty()){
            int n= top+1;
            for(int i=0;i<n/2;i++){
                arr[i]=arr[n/2-i-1];
            }
        }
    }
}