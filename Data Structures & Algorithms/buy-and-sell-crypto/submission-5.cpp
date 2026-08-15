class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = 0;
        int sell = 1;
        int answer = 0;

        while (sell < prices.size()) {

            int currentProfit = prices[sell] - prices[buy];

            if (currentProfit > 0) {
                answer = max(answer, currentProfit);
            } else {
                buy = sell;
            }

            sell++;
        }

        return answer;
    }
};