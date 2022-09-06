class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector <int> expected;
        int sum=0;
        for(int i=0;i<=heights.size()-1;i++){
            expected.push_back(heights[i]);
        }
        sort(heights.begin(),heights.end());
        for(int i=0;i<=heights.size()-1;i++){
            if(heights[i]!=expected[i])
                sum++;
        }
        return sum;
        
    }
};