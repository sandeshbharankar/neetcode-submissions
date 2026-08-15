class Solution {
public:

    void skipDuplicates(vector<int>& nums, int& left, int& right) {

        int leftNum = nums[left];
        int rightNum = nums[right];

        while (left < right && nums[left] == leftNum)
            left++;

        while (left < right && nums[right] == rightNum)
            right--;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {

            if (i != 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {

                int current = nums[i] + nums[left] + nums[right];

                if (current == 0) {

                    ans.push_back({
                        nums[i],
                        nums[left],
                        nums[right]
                    });

                    skipDuplicates(nums, left, right);

                }
                else if (current < 0) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return ans;
    }
};