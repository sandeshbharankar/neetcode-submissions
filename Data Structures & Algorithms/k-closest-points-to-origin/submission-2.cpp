class Solution {
public:
    double distance(vector<int>& p) {
        return sqrt(p[0] * p[0] + p[1] * p[1]);
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, vector<int>>> pq;

        for (auto& p : points) {
            pq.push({distance(p), p});

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