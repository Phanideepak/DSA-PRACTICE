/**
 *  Sum of 3 powers can only be in the form 3*p, 3*p+1;
 *  To get failure scenario: Keep dividing the given number till you get remainder 2.
 * */  

    bool checkPowersOfThree(int n) {
        while(n>0){
            if(n%3==2){
                return false;
            }
            n=n/3;
        }
        return true;
    }


    //Time complexisty: log N to the base 3.