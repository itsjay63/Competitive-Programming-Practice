class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i=0; i<s.size();i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char c = st.top();
                st.pop();
                if((s[i]==')' and c=='(') or
                    (s[i]=='}' and c=='{') or 
                    (s[i]==']' and c=='[')) {}
                else {
                    return false;
                }
            }
        }
        if(st.empty()) 
            return true;
        else 
            return false;
    }
};