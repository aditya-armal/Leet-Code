class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        const int n = matrix.size();

        for (int i = 1; i < n; ++i)
          for (int j = 0; j < n; ++j) {
            int mini = INT_MAX;
            for (int k = max(0, j - 1); k < min(n, j + 2); ++k)
              mini = min(mini, matrix[i - 1][k]);
            matrix[i][j] += mini;
          }

        return ranges::min(matrix[n - 1]);
    }
};