class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        auto possible = [&](int speed) {

            long long hours = 0;

            for (int bananas : piles) {
                hours += (bananas + speed - 1) / speed;
            }

            return hours <= h;
        };

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low < high) {

            int mid = low + (high - low) / 2;

            if (possible(mid)) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};