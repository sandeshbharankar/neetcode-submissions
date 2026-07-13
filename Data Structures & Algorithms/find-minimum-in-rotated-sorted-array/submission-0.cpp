class Solution {
public:
    int findMin(vector<int> &nums) {
        //normal bruth force approch 
        sort(nums.begin(), nums.end());
        return nums[0];
        
    }
};
