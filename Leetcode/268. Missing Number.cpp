class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l=nums.size();
        int sumn=0,suml=0;
        for(int i=0;i<l;i++){
            sumn=sumn+nums[i];
            suml=suml+i;
            
        }
        return (suml+l)-sumn;
    }
};