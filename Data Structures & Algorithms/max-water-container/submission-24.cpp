class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans = 0;
        int n = h.size();

        for (int i = 0; i < n; i++) {
            for (int j = n - 1; j > i; j--) {
                if ((j - i) * min(h[i], h[j]) <= ans)
                    break;

                ans = max(ans, (j - i) * min(h[i], h[j]));
            }
        }

        return ans;
    }
};