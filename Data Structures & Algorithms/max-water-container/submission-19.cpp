class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0, r = h.size() - 1, ans = 0;

        while (l < r) {
            int height;

            if (h[l] < h[r])
                height = h[l];
            else
                height = h[r];

            ans = max(ans, height * (r - l));

            if (h[l] < h[r])
                l++;
            else
                r--;
        }

        return ans;
    }
};