class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max_seq=1;
        if( nums.size()==0){
            return 0;
        }

        unordered_set<int> st;
        int temp_seq=1;
        
        for(int i:nums){

            if(st.count(i)){
               continue;

            }else if(st.count(i-1)){
                 temp_seq++;

                }else{
                max_seq=max(max_seq,temp_seq);
                temp_seq=1;
            }
            st.insert(i);
        }
              return  max(max_seq,temp_seq);
      
      
       
        
    }
};
