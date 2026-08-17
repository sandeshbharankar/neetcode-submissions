class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();

        int low = 0;
        int high = r * c;

        while (low < high) {
            int mid = low + (high - low) / 2;

            int row = mid / c;
            int column = mid % c;

            if (matrix[row][column] < target)
                low = mid + 1;
            else
                high = mid;
        }

        if (low == r * c)
            return false;

        return matrix[low / c][low % c] == target;
    }
};