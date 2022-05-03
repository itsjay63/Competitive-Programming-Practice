class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> v;
            for(char i = s[0];i<=s[3];i++){
                 for(char ch = s[1];ch<=s[4];ch++){
                    string k;
                    k = k + i + ch;
                    v.push_back(k);
              }     
            }
        return v;
    }
};