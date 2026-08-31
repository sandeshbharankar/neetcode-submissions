class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size()-2;i++){

        int l=i+1;
        int r=nums.size()-1;
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }

        while(l<r){
            int sum=nums[i]+nums[l]+nums[r];
            if(sum==0){
                ans.push_back({
                    nums[i],
                    nums[l],
                    nums[r]
                });
                l++;
                r--;
                if(l<r && nums[l]==nums[l-1]){
                    l++;
                }
                if(l<r&& nums[r-1]=nums[r]){
                    r--;
                }
            }else if(sum>0){
                r--;
            }else{
                l++;
            }
        }
        return ans;


      }
         
    }      
    
};
