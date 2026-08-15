class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> result;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; ++i) {

            if (i && nums[i] == nums[i - 1])
                continue;

            int target = -nums[i];

            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {

                int pairSum = nums[left] + nums[right];

                if (pairSum == target) {

                    result.push_back({
                        nums[i],
                        nums[left],
                        nums[right]
                    });

                    int leftElement = nums[left];
                    int rightElement = nums[right];

                    while (left < right &&
                           nums[left] == leftElement) {
                        ++left;
                    }

                    while (left < right &&
                           nums[right] == rightElement) {
                        --right;
                    }
                }
                else if (pairSum < target) {
                    ++left;
                }
                else {
                    --right;
                }
            }
        }

        return result;
    }
};