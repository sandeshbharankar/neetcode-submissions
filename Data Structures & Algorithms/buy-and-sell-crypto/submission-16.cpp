class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowestPrice = prices[0];
        int maximum = 0;

        for (int currentPrice : prices) {
            if (currentPrice < lowestPrice) {
                lowestPrice = currentPrice;
            }

            int difference = currentPrice - lowestPrice;

            if (difference > maximum) {
                maximum = difference;
            }
        }

        return maximum;
    }
};