class Solution {
public:
    string replaceDigits(string s) {
        
            if(s.size() % 2 == 0){
                for(int i = 0;i<s.size();i+=2){
                    s[i+1] = (char) (s[i] + (s[i+1] - '0'));
                }
            }
                
            else if(s.size() % 2 != 0){
                for(int i = 0;i<s.size()-1;i+=2){
                    s[i+1] = (char) (s[i] + (s[i+1] - '0'));
                }
            }
        return s;
    }
};