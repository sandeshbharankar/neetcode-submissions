class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());

        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {

                int total = nums[i] + nums[left] + nums[right];

                if (total < 0) {
                    left++;
                }
                else if (total > 0) {
                    right--;
                }
                else {
                    result.push_back({
                        nums[i],
                        nums[left],
                        nums[right]
                    });

                    int leftValue = nums[left];
                    int rightValue = nums[right];

                    while (left < right && nums[left] == leftValue)
                        left++;

                    while (left < right && nums[right] == rightValue)
                        right--;
                }
            }
        }

        return result;
    }
};