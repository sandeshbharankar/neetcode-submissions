class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;

        for (int i = 0; i < height.size(); i++) {
            for (int j = i + 1; j < height.size(); j++) {

                int h = min(height[i], height[j]);
                int width = j - i;

                int area = h * width;

                res = max(res, area);
            }
        }

        return res;
    }
};