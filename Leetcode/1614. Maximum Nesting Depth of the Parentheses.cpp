class Solution {
public:
    int maxDepth(string s) {
        int a=0,sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                sum++;
            }
            else if(s[i]==')'){
                sum--;
            } 
            a = max(a,sum);
        }
        return a;
    }
};