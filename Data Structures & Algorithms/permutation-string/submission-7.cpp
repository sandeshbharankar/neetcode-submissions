class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int ws=s1.length();

        vector<int> count1(26,0);
        vector<int> count2(26,0);
        for(int i:s1){
            count1[i-'a']++;

        }

        int left=0;
        int right=0;
        while(right<s2.length()){
            count2[s2[right]-'a']++;

            if(right-left+1 >ws){
                count2[s2[left]-'a']--;
                left++;
            }
            if(right-left+1 == ws){
                if(count1 == count2){
                    return true;
                }
            }
            right++;

        }
        return false;
        
    }
};
