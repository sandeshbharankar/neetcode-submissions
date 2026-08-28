class KthLargest {
    vector<int> nums;
    int k;

public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        this->nums = nums;
    }

    int add(int val) {
        nums.push_back(val);
        sort(nums.begin(), nums.end(), greater<int>());

        return nums[k - 1];
    }
};