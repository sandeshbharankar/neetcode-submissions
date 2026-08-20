class Solution {
public:
    int search(vector<int>& nums, int target) {
        //brut force approch 
        unordered_map<int ,int> mp;
        for(int i=0;i<nums.size(); i++){
            mp[i]=nums[i];
        }
        sort(nums.begin(), nums.end());

        int l=0;
        int r=nums.size()-1;
        int ans=-1;

        while(l<=r){
            int mid= l+(r-l)/2;
            if(target== nums[mid]){
                 ans= nums[mid];
                 break;
            }else if( target < nums[mid]){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
     if(ans== -1)
        return -1;
        for( auto it: mp){
            if(it.second== ans){
               return it.first;
            }
        }
        
        
    }
};
