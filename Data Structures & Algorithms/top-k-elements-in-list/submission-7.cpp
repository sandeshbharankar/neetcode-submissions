class Solution {
public:


    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
      priority_queue<
      pair<int,int>, 
      vector<pair<int,int>> ,
      greater<pair<int,int>>> min_heap;
      for(auto& [count,num]:freq){
        min_heap.push({count,num});
        if(min_heap.size()>k){
            min_heap.pop();
        }
      }
      vector<int>result;
      for(int i=0;i<k;i++){
        result.push(min_heap.top().second);
        min_heap.pop();
      }
      return result;

       
        
    }
};
