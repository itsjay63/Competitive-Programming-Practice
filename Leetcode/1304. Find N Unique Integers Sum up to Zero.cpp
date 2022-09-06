class Solution {
public:
    vector<int> sumZero(int n) {
        vector <int> v;
        if(n%2==1){
                v.push_back(0);
            }
        n /= 2;
        for(int i=1;i<=n;i++){
                v.push_back(i);
                v.push_back(-i);
            }
            
            
        return v;
        
        
    }
};