class Solution {
    int dfs(vector<int>& h, int l, int r, int best) {
        if (l >= r)
            return best;

        int area = min(h[l], h[r]) * (r - l);
        best = max(best, area);

        if (h[l] < h[r])
            return dfs(h, l + 1, r, best);

        return dfs(h, l, r - 1, best);
    }

public:
    int maxArea(vector<int>& h) {
        return dfs(h, 0, h.size() - 1, 0);
    }
};