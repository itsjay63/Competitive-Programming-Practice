class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int sum=0;
        for(int i=1; i<pref.size();i++){
                sum = sum ^ pref[i-1];
                pref[i]= sum ^ pref[i];
                
            }
        
        return pref;
    }
};