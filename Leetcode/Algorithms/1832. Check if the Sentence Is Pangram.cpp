class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> v(26,0);
        bool flag = true;
        for(int i=0;i<sentence.size();i++){
            sentence[i] =(char)tolower(sentence[i]);
        }
        for(int i=0;i<sentence.size();i++){
            int  k = tolower(sentence[i]) - 97 ;
            v[k] = v[k] + 1;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]<1){
                flag=false;
            }
        }
        return flag;
    }
};