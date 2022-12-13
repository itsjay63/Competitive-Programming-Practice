class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        if(mat==target){
            return true;
        }
        int d = 3;
        while(d--){

        for(int i=0;i<n;i++){
            for(int j=i; j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int k=0;k<n;k++){
            int l=0; int r=n-1;
            while(l<r){
                swap(mat[k][l],mat[k][r]);
                ++l;
                --r;
            }
        }
        if(mat==target){
            return true;
        }
        }
        return false;
       
        
    }
};