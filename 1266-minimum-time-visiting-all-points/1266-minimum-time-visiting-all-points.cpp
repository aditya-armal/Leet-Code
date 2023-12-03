class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int minTime = 0;

        for (int i = 1; i < points.size(); ++i) {
            int dx = std::abs(points[i][0] - points[i - 1][0]);
            int dy = std::abs(points[i][1] - points[i - 1][1]);
            
            minTime += std::max(dx, dy);
        }

        return minTime;
    }
};