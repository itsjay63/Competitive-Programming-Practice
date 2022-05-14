class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int diff=0;
        int m = 0;
        sort(points.begin(),points.end());
        for(int i=0;i<points.size()-1;i++){
            diff = abs(points[i][0] - points[i+1][0]);
            m = max(m,diff);
        }
        return m;
        
    }
};