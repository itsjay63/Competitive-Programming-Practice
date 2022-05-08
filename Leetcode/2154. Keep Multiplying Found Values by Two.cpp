class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int l = nums.size();
        while(l--){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==original){
                    original*=2;
                }
            } 
        }
        return original;
    }
};