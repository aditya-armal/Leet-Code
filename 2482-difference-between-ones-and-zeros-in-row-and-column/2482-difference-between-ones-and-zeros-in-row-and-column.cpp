class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
int m = grid.size();
    int n = grid[0].size();

    std::vector<std::vector<int>> diff(m, std::vector<int>(n, 0));

    std::vector<int> onesRow(m, 0);
    std::vector<int> zerosRow(m, 0);
    std::vector<int> onesCol(n, 0);
    std::vector<int> zerosCol(n, 0);

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            onesRow[i] += grid[i][j];
            zerosRow[i] += !grid[i][j];
        }
    }

    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            onesCol[j] += grid[i][j];
            zerosCol[j] += !grid[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            diff[i][j] = onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j];
        }
    }

    return diff;
    }
};