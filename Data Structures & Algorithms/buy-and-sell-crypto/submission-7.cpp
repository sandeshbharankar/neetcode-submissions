class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = 0;
        int maxProfit = 0;

        for (int sell = 1; sell < prices.size(); ++sell) {

            int profit = prices[sell] - prices[buy];

            maxProfit = max(maxProfit, profit);

            if (prices[sell] < prices[buy]) {
                buy = sell;
            }
        }

        return maxProfit;
    }
};