class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());

        int max_seq = 0;

        for(int num : st) {

            // Start only if num is the beginning of a sequence
            if(st.count(num - 1) == 0) {

                int current = num;
                int current_seq = 1;

                while(st.count(current + 1)) {
                    current++;
                    current_seq++;
                }

                max_seq = max(max_seq, current_seq);
            }
        }

        return max_seq;
    }
};