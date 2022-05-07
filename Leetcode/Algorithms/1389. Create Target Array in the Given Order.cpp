class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> array;
        int l = nums.size();
        for(int i=0;i<l;i++){
            array.insert(array.begin()+index[i],nums[i]);
        }
        return array;
    }
};