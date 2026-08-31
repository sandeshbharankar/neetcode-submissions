class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;

        int res = 0;

        while (left < right) {

            int leftHeight = height[left];
            int rightHeight = height[right];

            int area = min(leftHeight, rightHeight) * (right - left);

            res = max(res, area);

            if (leftHeight < rightHeight) {

                while (left < right &&
                       height[left] <= leftHeight) {
                    left++;
                }

            } else {

                while (left < right &&
                       height[right] <= rightHeight) {
                    right--;
                }
            }
        }

        return res;
    }
};