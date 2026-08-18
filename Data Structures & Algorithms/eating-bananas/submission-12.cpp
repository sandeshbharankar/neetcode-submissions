class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = 0;

        for (int value : piles) {
            high = max(high, value);
        }

        while (low < high) {

            int middle = low + (high - low) / 2;

            long long totalHours = 0;

            for (int value : piles) {

                int fullHours = value / middle;

                if (value % middle == 0) {
                    totalHours += fullHours;
                }
                else {
                    totalHours += fullHours + 1;
                }
            }

            if (totalHours <= h) {
                high = middle;
            }
            else {
                low = middle + 1;
            }
        }

        return low;
    }
};