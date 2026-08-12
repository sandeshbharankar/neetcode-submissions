class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> st;

        int left=0;
        
        int max_length=0;

        for(int right=0;right<s.length();right++){
            if(st.count(s[right])){
                 while(st.count(s[right])){
                     st.erase(s[left]);
                left++;
                 }
            }



            st.insert(s[right]);
           
            int temp_maxlength=right-left+1;
            max_length=max(temp_maxlength, max_length);

        }
        return max_length;
        
      

        }

};





































