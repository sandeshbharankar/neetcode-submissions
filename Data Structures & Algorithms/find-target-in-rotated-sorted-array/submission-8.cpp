class Solution {
public:

    int solve(vector<int>& nums, int left, int right, int target) {

        if (left > right)
            return -1;

        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[left] <= nums[mid]) {

            if (nums[left] <= target && target < nums[mid])
                return solve(nums, left, mid - 1, target);

            return solve(nums, mid + 1, right, target);
        }

        if (nums[mid] < target && target <= nums[right])
            return solve(nums, mid + 1, right, target);

        return solve(nums, left, mid - 1, target);
    }

    int search(vector<int>& nums, int target) {
        return solve(nums, 0, nums.size() - 1, target);
    }
};