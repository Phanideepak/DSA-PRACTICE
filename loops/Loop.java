import java.io.*;
import java.lang.*;
import java.util.*;

class Loop{

    public static void  main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int pocketMoney = 1000;
        for(int i =1; i<=n;i++){
            if(i%2 ==0) continue;
            pocketMoney = pocketMoney - 50;
            if(pocketMoney == 0){
                System.out.println("Pocket money over on day : "+ i);
                break;
            }
        }
        if(pocketMoney > 0) System.out.println("residue pocket money: "+pocketMoney);
    }

}