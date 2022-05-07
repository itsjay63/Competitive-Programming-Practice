class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int lq = queries.size();
        int lp = points.size();
        vector<int> v={};
        if((lp>=1 and lp<=500)and(lq>=1 and lq<=500))
        {
            for(int i=0;i<lq;i++){
            int count=0;
            for(int j=0;j<lp;j++){
                if(pow(points[j][0]-queries[i][0],2)+pow(points[j][1]-queries[i][1],2)                                                              <=pow(queries[i][2],2)){
                    count++;
                }
            }
             v.push_back(count);
            count=0;
            }
            int l = v.size();
                for(int i=0;i<l;i++){
                cout<<v[i]<<" ";
            }
        }
        
        return v;
    }
};