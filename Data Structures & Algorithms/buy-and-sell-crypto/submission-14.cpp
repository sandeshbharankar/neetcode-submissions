class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = prices[0];
        int best = 0;

        for (int day = 1; day < prices.size(); ++day) {
            int currentGain = prices[day] - lowest;

            if (currentGain > best)
                best = currentGain;

            if (prices[day] < lowest)
                lowest = prices[day];
        }

        return best;
    }
};