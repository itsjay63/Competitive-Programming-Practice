class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = prices.size();
        int profit = 0;
        for(int i=1;i<l;i++){
            if(prices[i]>prices[i-1]){
                profit = profit + (prices[i]-prices[i-1]);
            }
        }
        return profit;
    }
};