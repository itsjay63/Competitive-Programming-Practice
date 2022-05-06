class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> v;
        v.push_back(0);
        int alt=0;
        for(int i=0;i<gain.size();i++){
            alt = alt + gain[i];
            v.push_back(alt);
        }
        return *max_element(v.begin(),v.end());
    }
};