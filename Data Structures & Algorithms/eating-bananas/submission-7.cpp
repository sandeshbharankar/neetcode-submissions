class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low < high) {

            int mid = low + (high - low) / 2;
            long long hours = 0;

            int i = 0;

            while (i < piles.size()) {
                hours += (piles[i] + mid - 1) / mid;
                i++;
            }

            if (hours <= h) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};