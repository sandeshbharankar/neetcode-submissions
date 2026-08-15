class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> res;

        sort(nums.begin(), nums.end());

        const int n = nums.size();

        for (int first = 0; first < n - 2; ++first) {

            if (first > 0 && nums[first] == nums[first - 1])
                continue;

            int low = first + 1;
            int high = n - 1;

            while (low < high) {

                int value = nums[first] + nums[low] + nums[high];

                if (value == 0) {

                    res.emplace_back(
                        vector<int>{nums[first], nums[low], nums[high]}
                    );

                    ++low;
                    --high;

                    while (low < high && nums[low] == nums[low - 1])
                        ++low;

                    while (low < high && nums[high] == nums[high + 1])
                        --high;
                }
                else if (value < 0) {
                    ++low;
                }
                else {
                    --high;
                }
            }
        }

        return res;
    }
};