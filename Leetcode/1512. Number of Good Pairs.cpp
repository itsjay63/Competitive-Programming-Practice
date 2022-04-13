class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        int l = nums.size();
        cout<<l<<endl;
        for(int i=0;i<l;i++){
            for(int j=i;j<l;j++){
                if((i<j) && (nums[i]==nums[j])){
                    count++;
                } 
                
            }
        }
        return count;
    }
};