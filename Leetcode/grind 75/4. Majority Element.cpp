class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /* 
        map<int,int> m;
        int ans;
        for(int i=0; i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto &i : m){
            if(i.second>floor(nums.size()/2)){
                ans = i.first;
            }
        }
        return ans;
        */
        // moore's voting algo 
        int count=0;
        int ans = 0;
        for(int i=0; i<nums.size();i++){
            if(count==0){
                ans = nums[i];
            }
            if(ans==nums[i]){
                count++;
            }else{
                count--;
            }
        }
        return ans;
    }
};