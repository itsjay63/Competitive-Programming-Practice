class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=nums.size();
        vector<int> v;
        for(int i=0;i<l-1;i++){
            for(int j=i+1;j<l;j++){
                if(nums[i]+nums[j]==target){
                        v.push_back(i);
                        v.push_back(j);
                }    
            }
        }
        return v;
    }
};