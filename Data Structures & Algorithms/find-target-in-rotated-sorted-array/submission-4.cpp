class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }

        sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
                return mp[target];

            if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return -1;
    }
};