class Solution {
public:
    int balancedStringSplit(string s) {
        int sum=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                sum++;
            }
            else sum--;
            if(sum==0) ans++;
        }
        return ans;
    }
};