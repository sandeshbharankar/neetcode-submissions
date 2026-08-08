class Solution {
public:


    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto& [num,count]:freq){
            bucket[count].push_back(num);

        }
        vector<int>result;
        //iteration
        for(int i=nums.size();i>=1;i--){
            for(int x: bucket[i]){
                result.push_back(x);
                if(result.size()==k){
                    return result;
                }

            }
        }
        return result;

       
        
    }
};
