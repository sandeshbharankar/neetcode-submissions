class KthLargest {
    vector<int> nums;
    int k;

public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        this->nums = nums;
        sort(nums.begin(), nums.end());
    }

    int add(int val) {
        auto pos = lower_bound(nums.begin(), nums.end(), val);
        nums.insert(pos, val);

        return nums[nums.size() - k];
    }
};