class Solution {
public:

    bool canEat(vector<int>& piles, int hoursLimit, int speed) {

        long long hoursUsed = 0;

        for (int bananas : piles) {

            hoursUsed += bananas / speed;

            if (bananas % speed != 0) {
                hoursUsed++;
            }

            if (hoursUsed > hoursLimit) {
                return false;
            }
        }

        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int minimum = 1;
        int maximum = *max_element(piles.begin(), piles.end());
        int best = maximum;

        while (minimum <= maximum) {

            int rate = minimum + (maximum - minimum) / 2;

            if (canEat(piles, h, rate)) {
                best = rate;
                maximum = rate - 1;
            }
            else {
                minimum = rate + 1;
            }
        }

        return best;
    }
};