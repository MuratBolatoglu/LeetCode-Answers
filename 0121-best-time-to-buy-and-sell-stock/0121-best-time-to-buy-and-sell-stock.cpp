class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0; // edge case handling
        
        int maxprofit = 0;
        int minprice = prices[0];
        
        for (size_t i = 1; i < prices.size(); i++) {
            if (prices[i] < minprice) {
                minprice = prices[i];
            } else {
                int profit = prices[i] - minprice;
                if (profit > maxprofit) {
                    maxprofit = profit;
                }
            }
        }
        
        return maxprofit;
    }
};
