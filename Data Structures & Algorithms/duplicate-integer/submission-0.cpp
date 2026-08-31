class solution{
    public:
    boolean hasDuplicate(vector<int> &nums){
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(numbs[i]==nums[j]){
                    return true;
                }else{
                    return false;
                }
            }
        }
    }
}