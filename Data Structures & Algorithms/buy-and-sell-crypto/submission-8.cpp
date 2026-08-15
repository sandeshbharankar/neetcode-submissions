class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int lowest = INT_MAX;
        int answer = 0;

        for (int price : prices) {

            if (price < lowest) {
                lowest = price;
            }

            int profit = price - lowest;

            if (profit > answer) {
                answer = profit;
            }
        }

        return answer;
    }
};