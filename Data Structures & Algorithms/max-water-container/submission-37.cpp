class Solution {
public:

    int solve(vector<int>& height, int left, int right) {

        if (left >= right)
            return 0;

        int area =
            min(height[left], height[right])
            * (right - left);

        if (height[left] <= height[right]) {

            return max(
                area,
                solve(height, left + 1, right)
            );

        } else {

            return max(
                area,
                solve(height, left, right - 1)
            );
        }
    }

    int maxArea(vector<int>& height) {

        return solve(
            height,class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int res = 0;

        while (l < r) {
            int area = min(heights[l], heights[r]) * (r - l);
            res = max(res, area);

            if (heights[l] <= heights[r]) {
                l++;
            } else {
                r--;
            }
        }
        return res;
    }
};
            0,
            height.size() - 1
        );
    }
};