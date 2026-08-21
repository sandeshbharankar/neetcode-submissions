class Solution {
public:

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<
            tuple<int, int, int>
        > pq;

        for (auto& p : points) {

            int x = p[0];
            int y = p[1];

            int d = x * x + y * y;

            pq.push({d, x, y});

            if (pq.size() > k)
                pq.pop();
        }

        vector<vector<int>> ans;

        while (!pq.empty()) {

            auto [d, x, y] = pq.top();
            pq.pop();

            ans.push_back({x, y});
        }

        return ans;
    }
};