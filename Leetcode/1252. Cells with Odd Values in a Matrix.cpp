class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> v( m , vector<int> (n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v[i][j]=0;
            }
        }
        
        int l = indices.size();
        int count=0;
        int c=m; 
        int d=n;
        for(int i=0;i<l;i++){
            m = indices[i][0]; 
            for(int a=0;a<d;a++){
                v[m][a] = v[m][a] + 1;
            }
            
            n = indices[i][1];
            for(int a=0;a<c;a++){
                v[a][n] = v[a][n] + 1;
            }
     
        }
        
        
        for(int i=0;i<c;i++){
            for(int j=0;j<d;j++){
                if(v[i][j]%2 != 0){
                    count++;
                }
            }
        }
        return count;
    }
    
};