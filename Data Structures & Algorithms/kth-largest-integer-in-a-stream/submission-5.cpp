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

        nth_element(nums.begin(),
                    nums.begin() + k - 1,
                    nums.end(),
                    greater<int>());

        return nums[k - 1];
    }
};