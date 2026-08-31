class Solution {
public:
int mult(int index, int n, vector<int>& arr){
    int prod=1;
    if(n!=0){
        for(int k:arr){
        prod*=k;
 } 
    return prod/n;
   
    }else{
        for(int i=0;i<arr.size();i++){
            if(i==index){
                continue;
            }
            prod*=arr[i];
        }
        return prod;


    }
    return prod;
}
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int j=0;
        for(int i:nums){
            int a=mult(j,i,nums);
            ans.push_back(a);
            j++;

        }
        return ans;


    }
};
