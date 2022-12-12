class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int k=0; k<n;k++){
            int l=0; int r=n-1;
            while(l<r){
                swap(matrix[k][l], matrix[k][r]);
                ++l;
                --r;
            }
            
        }
    }
};