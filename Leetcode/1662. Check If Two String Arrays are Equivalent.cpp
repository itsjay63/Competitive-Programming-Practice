class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int l1 = word1.size();
        int l2 = word2.size();
        string k1,k2;
        for(int i=0;i<l1;i++){
            k1 = k1 + word1[i];
        }
        for(int i=0;i<l2;i++){
            k2 = k2 + word2[i];
        }
        if(k1==k2)
            return true;
        else 
            return false;
    }
};