//-----------------------------------------------------
//--------------------Author: itsjaysuthar-------------
//-----------------------------------------------------


package com.jay;

public class Practice {
    public static void main(String[] args) {
        int[] nums = {5,7,7,8,8,10};
        int target=8;
        searchRange(nums, target);

    }
    static int[] searchRange(int[] nums, int target) {
        int[] ans = {-1,-1};

        int start = search(nums,target, true );
        int end = search(nums, target, false);
        ans[0]=start;
        ans[1]=end;
        //System.out.println(ans[0] + " "+ ans[1]);
        return ans;
    }
    static int search(int[] nums,int target, boolean firstNumber){
        int ans = -1;
        int start = 0;
        int end = nums.length - 1;
        while (start <= end) {
            int mid = (start + ((end - start) / 2));

            if(target < nums[mid]){
                end= mid-1;
            }else if(target > nums[mid]) {
                start = mid+1;
            }else {
                ans = mid;
                if(firstNumber){
                    end = mid-1;
                }else{
                    start = mid+1;
                }
            }
        }
        return ans;
    }
}

