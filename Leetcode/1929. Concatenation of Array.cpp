class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> num;
        int n=2;
        while(n--){
        for(int i=0; i<nums.size();i++){
            num.push_back(nums[i]);
          }
        }    
        return num;
        
    }
};