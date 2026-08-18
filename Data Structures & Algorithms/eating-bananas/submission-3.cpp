class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int lo = 1;
        int hi = *max_element(piles.begin(), piles.end());

        while (lo <= hi) {

            int speed = lo + (hi - lo) / 2;
            long long time = 0;

            for (int banana : piles) {
                time += (banana + speed - 1) / speed;
            }

            if (time <= h) {
                hi = speed - 1;
            } else {
                lo = speed + 1;
            }
        }

        return lo;
    }
};