class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int sum = 0;
        vector<int> r;
        vector<int> c;
        vector<int> t;
        int m=0;
        int n=0;
        for(int i=0;i<grid.size();i++){
            m = *max_element(grid[i].begin(),grid[i].end());
            r.push_back(m);
            for(int j=0;j<grid.size();j++){
                t.push_back(grid[j][i]);
            }
            c.push_back(*max_element(t.begin(),t.end()));
            t.clear();
        }
        for(int i=0;i<r.size();i++){
            for(int j=0;j<c.size();j++){
                sum = sum + abs(grid[i][j] - min(r[i],c[j]));
            }
        }
        
        return sum;
        
    }
};