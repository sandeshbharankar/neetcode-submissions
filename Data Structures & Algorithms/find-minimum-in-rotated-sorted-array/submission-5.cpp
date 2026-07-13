class Solution {
public:
    int findMin(vector<int>& nums) {

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {

            // Array is already sorted
            if (nums[left] <= nums[right])
                return nums[left];

            int mid = left + (right - left) / 2;

            // Is mid the minimum?
            if (mid > 0 && nums[mid] < nums[mid - 1])
                return nums[mid];

            if (nums[mid] >= nums[left])
                left = mid + 1;
            else
                right = mid - 1;
        }

        return -1; // never reached
    }
};