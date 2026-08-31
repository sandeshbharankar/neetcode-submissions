class Solution {
public:
    int maxArea(vector<int>& h) {
        vector<pair<int,int>> a;

        for (int i = 0; i < h.size(); i++)
            a.push_back({h[i], i});

        int ans = 0;

        for (auto x : a) {
            for (auto y : a) {
                int height = min(x.first, y.first);
                int width = abs(x.second - y.second);

                ans = max(ans, height * width);
            }
        }

        return ans;
    }
};