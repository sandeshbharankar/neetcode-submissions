class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans = 0;
        int i = 0;

        while (i < h.size()) {
            int j = i + 1;

            while (j < h.size()) {
                ans = max(ans, min(h[i], h[j]) * (j - i));
                j++;
            }

            i++;
        }

        return ans;
    }
};