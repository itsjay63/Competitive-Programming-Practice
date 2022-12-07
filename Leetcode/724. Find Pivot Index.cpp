class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> v;
        int total_sum=0;
        for(int i=0; i<nums.size();i++){
                total_sum+=nums[i];
        }
        int ans=-1;
        int left_sum=0;
        int right_sum=0;
        for(int i=0; i<nums.size();i++){
                right_sum = total_sum - left_sum - nums[i];
                if(left_sum == right_sum){
                    ans = i;
                    break;
                }
                left_sum+=nums[i];
        }
        return ans;

    }
};