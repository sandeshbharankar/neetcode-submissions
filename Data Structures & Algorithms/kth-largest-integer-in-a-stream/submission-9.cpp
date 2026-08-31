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
        int l = 0, r = nums.size();

        while (l < r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] < val)
                l = mid + 1;
            else
                r = mid;
        }

        nums.insert(nums.begin() + l, val);

        return nums[nums.size() - k];
    }
};