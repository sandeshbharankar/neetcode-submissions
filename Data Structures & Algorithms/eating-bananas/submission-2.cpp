class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        // Minimum possible speed
        int left = 1;

        // Maximum possible speed
        int right = *max_element(piles.begin(), piles.end());

        int ans = right;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            long long hours = 0;

            // Calculate total hours needed with speed = mid
            for (int pile : piles) {
                hours += (pile + mid - 1) / mid;
            }

            if (hours <= h) {
                ans = mid;          // Current speed works
                right = mid - 1;    // Try smaller speed
            }
            else {
                left = mid + 1;     // Need faster speed
            }
        }

        return ans;
    }
};