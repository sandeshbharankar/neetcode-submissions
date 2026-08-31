class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;

        int i = 0;

        while (i < height.size()) {

            int j = i + 1;

            while (j < height.size()) {

                int h = min(height[i], height[j]);
                int width = j - i;

                res = max(res, h * width);

                j++;
            }

            i++;
        }

        return res;
    }
};