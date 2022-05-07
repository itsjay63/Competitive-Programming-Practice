//-----------------------------------------------------
//--------------------Author: itsjaysuthar-------------
//-----------------------------------------------------


package com.jay;

public class Practice {
    public static void main(String[] args) {
        int[][] accounts={{1,2,3} , {2,3,4}};
        System.out.println(sum(accounts));
    }
    static int sum(int[][] accounts){
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < accounts.length; i++) {
            int sum=0;
            for (int j = 0; j < accounts[i].length; j++) {
                sum = sum + accounts[i][j];
            }
            if(sum>max){
                max=sum;
            }
        }
        return max;
    }

}
