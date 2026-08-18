class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        long long left = 1;
        long long right = *max_element(piles.begin(), piles.end());

        while (left < right) {

            long long rate = left + (right - left) / 2;
            long long needed = 0;

            for (int bananas : piles) {
                needed += (bananas + rate - 1) / rate;
            }

            if (needed > h) {
                left = rate + 1;
            }
            else {
                right = rate;
            }
        }

        return (int)left;
    }
};