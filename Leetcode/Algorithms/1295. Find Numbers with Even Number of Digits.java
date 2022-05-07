//-----------------------------------------------------
//--------------------Author: itsjaysuthar-------------
//-----------------------------------------------------


package com.jay;

public class Practice {
    public static void main(String[] args) {
        int[] nums={12,3457,2,6,7896};
        System.out.println(digit(nums));
    }
    static int digit(int[] nums) {
            int sum=0;
        for (int i = 0; i < nums.length; i++) {
            int count = 0;
            int n = nums[i];
            while (n > 0) {
                count++;
                n = n / 10;
            }
            if(even(count)){
                sum++;
            };
        }
        return sum;
    }
    static boolean even(int count){

        return count % 2 == 0;
    }

}
