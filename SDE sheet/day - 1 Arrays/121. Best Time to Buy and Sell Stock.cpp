class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int minValue = prices[0];
        for(int i=0; i<prices.size();i++){
            minValue = min(minValue,prices[i]);
            maxPro = max(maxPro, prices[i]-minValue);
        }
        return maxPro;
    }
};