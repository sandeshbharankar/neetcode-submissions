class Solution {
public:
    int maxArea(vector<int>& h) {
        vector<pair<int,int>> a;

        for (int i = 0; i < h.size(); i++)
            a.push_back({h[i], i});

        int ans = 0;

        for (auto x : a) {
            for (auto y : a) {
                int height = min(x.first, y.first);
                int width = abs(x.second - y.second);

                ans = max(ans, height * width);
            }
        }

        return ans;class Solution {
public:
    int maxArea(vector<int>& heights) {
       int left=0;
       int right= heights.size()-1;
       int res=0;
       while(left<right){
        int minimum=min(heights[left],heights[right]);
        int ans= minimum*(right-left);
        res=max(res ,ans);
        if(heights[left] < heights[right]){
            left++;
        }else{
            right--;
        }
       }class Solution {
public:
    int maxArea(vector<int>& h) {
        int res = 0;

        for (int i = 0; i < h.size(); i++) {
            for (int j = i + 1; j < h.size(); j++) {
                res = max(res, min(h[i], h[j]) * (j - i));
            }
        }

        return res;
    }
};
       return res;

    }
};
    }
};