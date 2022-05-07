class Solution {
public:
    int minOperations(vector<int>& nums) {
        int l = nums.size();
        int sum=0;
        if(l>0){
            for(int i=1;i<l;i++){
                if(nums[i-1]==nums[i]){
                    nums[i]= (nums[i] + 1);
                    sum = sum + 1; 
                }
                else if(nums[i-1]>nums[i]){
                    int diff = (nums[i-1]+1) - nums[i];
                    sum = sum + diff;
                    nums[i] = nums[i-1]+1;
                    
                }
            }
        }
        return sum;
    }
};