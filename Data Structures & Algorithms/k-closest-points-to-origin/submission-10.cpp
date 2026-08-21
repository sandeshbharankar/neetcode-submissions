class Solution {
public:

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        nth_element(
            points.begin(),
            points.begin() + k,
            points.end(),
            [](const vector<int>& a, const vector<int>& b) {

                int d1 = a[0] * a[0] + a[1] * a[1];
                int d2 = b[0] * b[0] + b[1] * b[1];

                return d1 < d2;
            }
        );

        return vector<vector<int>>(
            points.begin(),
            points.begin() + k
        );
    }
};