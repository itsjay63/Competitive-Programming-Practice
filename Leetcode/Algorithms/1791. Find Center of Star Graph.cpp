class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int ans=0;
        int l = edges.size();
        vector<int> v(l+2,0);
        for(int i=0;i<l;i++){
            for(int j=0;j<edges[i].size();j++){
                int k = edges[i][j];
                v[k]++;
            }  
        }
        int m = *max_element(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]==m){
                ans=i;
            }
            
            
        }
        return ans;
        
    }
};