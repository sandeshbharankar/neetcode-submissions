class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int low = 0;
        int high = m * n - 1;

        while (low <= high) {
            int middle = low + (high - low) / 2;

            int r = middle / n;
            int c = middle % n;

            if (matrix[r][c] > target) {
                high = middle - 1;
            }
            else if (matrix[r][c] < target) {
                low = middle + 1;
            }
            else {
                return true;
            }
        }

        return false;
    }
};