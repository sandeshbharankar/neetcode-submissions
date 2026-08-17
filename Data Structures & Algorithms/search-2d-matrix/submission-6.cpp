class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int total = matrix.size() * matrix[0].size();

        int start = 0;
        int end = total - 1;

        while (start <= end) {
            int mid = (start + end) / 2;

            int x = mid / matrix[0].size();
            int y = mid % matrix[0].size();

            int value = matrix[x][y];

            if (value == target)
                return true;

            if (value > target)
                end = mid - 1;
            else
                start = mid + 1;
        }

        return false;
    }
};