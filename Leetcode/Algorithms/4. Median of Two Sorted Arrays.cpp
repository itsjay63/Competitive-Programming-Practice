class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        int n2=nums2.size();
        for(int i=0;i<n2;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int l = nums1.size();
        if(l%2==0){
            l=(l/2)-1;
            ans = double((nums1[l]+nums1[l+1])/2.0);
        }else{
            l=(l/2);
            ans = double(nums1[l]);
        }
        return ans;
        
    }
};