class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_set<int> s(nums.begin(),nums.end());

        vector<int> new_nums;
        for(int i:s){
            new_nums.push_back(i);
        }
        sort(new_nums.begin(),new_nums.end());

        if(new_nums.size()==0){
            return 0;
        }
      
       int left=0;
       int right=0;
       int max_length=1;
       while(left<new_nums.size()-1){
        if(new_nums[left+1]==new_nums[left]+1){
            right++;
            max_length=max(max_length,(right-left+1));
            
        }else{
            
           right++;
           left=right;
        }
       }
       return max_length;
      
       
        
    }
};
