class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0;
        int profit=0;
        int ans =0;
     
        for(int right=0;right<prices.size();right++){
            profit+=prices[right]-prices[left];

            if(right-left+1 ==prices.size()){
                
                left++;
            }
            int ans=max(ans,profit);

        }
        return ans;
        
    }
};
