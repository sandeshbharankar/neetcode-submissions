class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int start = 1;
        int end = *max_element(piles.begin(), piles.end());
        int result = end;

        while (start <= end) {

            int k = start + (end - start) / 2;
            long long total = 0;

            for (int bananas : piles) {
                total += ceil((double)bananas / k);
            }

            if (total <= h) {
                result = k;
                end = k - 1;
            } 
            else {
                start = k + 1;
            }
        }

        return result;
    }
};