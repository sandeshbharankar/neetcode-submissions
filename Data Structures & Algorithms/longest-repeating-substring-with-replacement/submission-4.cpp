class Solution {
public:
    int characterReplacement(string s, int k) {

        array<int, 26> freq{};

        int left = 0;
        int right = 0;

        int maxFreq = 0;
        int ans = 0;

        while (right < s.size()) {

            freq[s[right] - 'A']++;

            maxFreq = max(
                maxFreq,
                freq[s[right] - 'A']
            );

            while (right - left + 1 - maxFreq > k) {

                freq[s[left] - 'A']--;
                left++;
            }

            ans = max(
                ans,
                right - left + 1
            );

            right++;
        }

        return ans;
    }
};