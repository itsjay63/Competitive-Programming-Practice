class Solution {
public
    vectorint buildArray(vectorint& nums) {
        int l=nums.size();
        vectorint ans;
        for(int i=0;il;i++){
            ans.push_back(nums[nums[i]]); 
        }
      return ans;  
    }
    
};