class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int smallest = 1;
        int largest = 0;

        for (int p : piles) {
            largest = max(largest, p);
        }

        int answer = largest;

        while (smallest <= largest) {

            int current = smallest + (largest - smallest) / 2;
            long long required = 0;

            for (int p : piles) {
                required += p / current;

                if (p % current != 0) {
                    required++;
                }
            }

            if (required <= h) {
                answer = current;
                largest = current - 1;
            }
            else {
                smallest = current + 1;
            }
        }

        return answer;
    }
};