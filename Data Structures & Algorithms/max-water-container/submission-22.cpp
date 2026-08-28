class Solution {
    int solve(vector<int>& h, int l, int r) {
        if (l >= r)
            return 0;

        int area = min(h[l], h[r]) * (r - l);

        if (h[l] < h[r])
            return max(area, solve(h, l + 1, r));

        return max(area, solve(h, l, r - 1));
    }

public:
    int maxArea(vector<int>& h) {
        return solve(h, 0, h.size() - 1);
    }
};