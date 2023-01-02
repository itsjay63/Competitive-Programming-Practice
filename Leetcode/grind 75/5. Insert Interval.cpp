class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> v;
        for(auto it:intervals){
            if(it[1]<newInterval[0]){
                v.push_back(it);
            }
        }
        for(auto it:intervals){
            if((it[0]>=newInterval[0] && it[0]<=newInterval[1]) || 
                (it[1]>=newInterval[0] && it[1]<=newInterval[1]) ||
                (it[0]<=newInterval[0] && it[1]>=newInterval[1])){
                    newInterval[0]=min(newInterval[0],it[0]);
                    newInterval[1]=max(newInterval[1],it[1]);
                }
        }
        v.push_back(newInterval);
        for(auto it:intervals){
            if(it[0]>newInterval[1]){
                v.push_back(it);
            }
        }
        return v;
    }
};