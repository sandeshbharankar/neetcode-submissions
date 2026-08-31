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
            height,
            0,
            height.size() - 1
        );
    }
};