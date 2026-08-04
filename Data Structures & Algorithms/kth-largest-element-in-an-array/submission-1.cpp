class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int> , greater<int>>min_heap;
        for(int m: nums){
            min_heap.push(m);
            if(min_heap.size()>k){
                min_heap.pop();
            }
        }
        
        int ans=min_heap.top();
        return ans;
        
    }
};
