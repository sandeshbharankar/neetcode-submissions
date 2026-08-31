class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_area=0;
        for(int i=0;i<heights.size();i++){
            int j=i+1;
            while(j< heights.size()){
                int min_bar=min(heights[i],heights[j]);
                max_area=max(max_area, min_bar*(j-i));
                j++;
            }
        }
        return max_area;
        
    }
};
