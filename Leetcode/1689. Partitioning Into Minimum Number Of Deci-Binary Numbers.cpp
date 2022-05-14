class Solution {
public:
    int minPartitions(string n) {
        vector<int> v;
        int m=0;
        for(int i=0;i<n.size();i++){
            v.push_back(n[i] - '0');
        }
        m = *max_element(v.begin(),v.end());
        return m;
    }
};