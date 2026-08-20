class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<pair<int, int>> arr;

        for (int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid].first == target)
                return arr[mid].second;

            if (arr[mid].first < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return -1;
    }
};