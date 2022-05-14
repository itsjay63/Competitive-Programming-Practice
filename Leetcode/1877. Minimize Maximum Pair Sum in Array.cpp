class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int a=0;
        sort(nums.begin(),nums.end());
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            a = max(a,nums[s] + nums[e]);
            s++;
            e--;
        }
        return a;
        
    }
};