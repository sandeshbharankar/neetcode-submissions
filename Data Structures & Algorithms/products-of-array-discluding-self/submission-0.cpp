class Solution {
public:
int mult(int n, vector<int>& arr){
    int prod=1;
    if(n!=0){
        for(int k:arr){
        prod*=k;

    } 
    return prod/n;
   
    }else{
        for(int k:arr){
            if(k==n){
                continue;
            }
             prod*=k;

        }
        return prod;
    }
    
}
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        for(int i:nums){
            int a=mult(i,nums);
            ans.push_back(a);

        }
        return ans;


    }
};
