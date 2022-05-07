class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int l = nums.size();
        sort(nums.begin(),nums.end());
        return ((nums[l-1]-1) * (nums[l-2]-1));
        
    }
};