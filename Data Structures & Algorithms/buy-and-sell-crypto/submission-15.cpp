class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyingPrice = prices[0];
        int earning = 0;

        for (int i = 1; i < prices.size(); ++i) {
            int today = prices[i];

            if (today - buyingPrice > earning) {
                earning = today - buyingPrice;
            }

            if (today < buyingPrice) {
                buyingPrice = today;
            }
        }

        return earning;
    }
};