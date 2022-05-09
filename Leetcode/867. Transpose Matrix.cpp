class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> v1;
        for(int i=0;i<matrix[0].size();i++){
            vector<int> v2;
            for(int j=0;j<matrix.size();j++){
                v2.push_back(matrix[j][i]);
            }
            v1.push_back(v2);
            
        }
        return v1;
    }
};