class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0, r = h.size() - 1, ans = 0;

        while (l < r) {
            ans = max(ans, (r - l) * (h[l] < h[r] ? h[l] : h[r]));

            h[l] < h[r] ? l++ : r--;
        }

        return ans;
    }
};