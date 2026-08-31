class Solution {
public:

  

    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(j!=i){
                    prod=prod*j;
                }
            }
            ans.push_back(prod);
        }
return ans;
       
    }
};