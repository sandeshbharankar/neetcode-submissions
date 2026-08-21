class Solution {
public:

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        auto cmp = [](const vector<int>& a,
                      const vector<int>& b) {

            int da = a[0] * a[0] + a[1] * a[1];
            int db = b[0] * b[0] + b[1] * b[1];

            return da > db;
        };

        priority_queue<
            vector<int>,
            vector<vector<int>>,
            decltype(cmp)
        > pq(cmp);

        for (auto& p : points) {
            pq.push(p);
        }

        vector<vector<int>> ans;

        while (k--) {
            ans.push_back(pq.top());
            pq.pop();
        }

        return ans;
    }
};