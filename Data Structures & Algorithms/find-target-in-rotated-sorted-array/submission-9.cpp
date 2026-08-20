class Solution {
public:

    int binarySearch(vector<int>& nums, int left, int right, int target) {

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {

        int n = nums.size();

        if (n == 0)
            return -1;

        // Find smallest element / rotation point
        int left = 0;
        int right = n - 1;

        while (left < right) {

            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[right])
                left = mid + 1;
            else
                right = mid;
        }

        int pivot = left;

        // Target may be in left sorted portion
        if (target >= nums[pivot] && target <= nums[n - 1])
            return binarySearch(nums, pivot, n - 1, target);

        // Target may be in right sorted portion
        return binarySearch(nums, 0, pivot - 1, target);
    }
};