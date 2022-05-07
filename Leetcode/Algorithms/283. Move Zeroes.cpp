class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v;
        int l=nums.size();
        int count=0;
        
        for(int i=0;i<l;i++){
            if(nums[i]==0) count++;
            if(nums[i] != 0)
                v.push_back(nums[i]);
        }
        while(count--){
            v.push_back(0);
        }
        for(int i=0;i<l;i++){
            nums[i]=v[i];
        }
        cout<<"[";
        for(int i=0;i<l;i++){
            if(i==l-1) cout<<nums[i];
            else cout<<nums[i]<<",";
        }
        cout<<"]";
    }
};