class Solution {
public:

    struct Node {
        int dist;
        int x;
        int y;

        bool operator<(const Node& other) const {
            return dist < other.dist;
        }
    };

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<Node> pq;

        for (auto& p : points) {

            int x = p[0];
            int y = p[1];

            int dist = x * x + y * y;

            pq.push({dist, x, y});

            if (pq.size() > k)
                pq.pop();
        }

        vector<vector<int>> ans;

        while (!pq.empty()) {

            Node curr = pq.top();
            pq.pop();

            ans.push_back({curr.x, curr.y});
        }

        return ans;
    }
};