class Solution {
public:

    struct Compare {
        bool operator()(const pair<int, vector<int>>& a,
                        const pair<int, vector<int>>& b) {
            return a.first < b.first;
        }
    };

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<
            pair<int, vector<int>>,
            vector<pair<int, vector<int>>>,
            Compare
        > pq;

        for (auto& p : points) {

            int d = p[0] * p[0] + p[1] * p[1];

            pq.push({d, p});

            if (pq.size() > k)
                pq.pop();
        }

        vector<vector<int>> ans;

        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};