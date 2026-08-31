class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(char ch: nums){
            for(char ch2: nums){
                if(ch+ch2 == target && ch !== ch2){
                    return ch, ch2;
                }

            }
        }
    }
};
