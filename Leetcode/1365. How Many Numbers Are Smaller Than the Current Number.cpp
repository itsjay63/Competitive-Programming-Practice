class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> num;
        int l=nums.size();
        for(int i=0;i<l;i++){
            int count=0;
            for(int j=0;j<l;j++){
                if((nums[i]>nums[j])) count++;
            }
            num.push_back(count);
        }
        return num;
    }
};