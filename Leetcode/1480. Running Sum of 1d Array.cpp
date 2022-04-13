class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int l=nums.size();
        if(l>=1 && l<=1000){
            int sum=0;
            for(int i=0;i<l;i++){
                if(nums[i]>=-1000000 && nums[i]<=1000000){
                    sum = sum + nums[i];
                    nums[i]=sum;
                }
            }
        }
        return nums;
    }
};