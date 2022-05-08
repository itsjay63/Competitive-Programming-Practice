class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        vector<int> v;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(i % 10 == nums[i]){
                v.push_back(i);
            }
        }
        if(v.size()==0){
            ans=-1;
        }
        else{
            ans = v[0];
        }
        return ans;
    }
};