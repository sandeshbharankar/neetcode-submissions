class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max_length=1;
        int cur=1;
        int prev=0;
        while(cur<nums.size()){
            int chain=max_length;
            if(nums[cur]==nums[prev]+1){
                chain++;
            }
            prev=cur;
            cur++;
            max_length=max(max_length,chain);
        }
        return max_length;
        
    }
};
