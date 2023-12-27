class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();

    if (n <= 1) {
        return 0;
    }

    int minTime = 0;

    for (int i = 1; i < n; ++i) {
        if (colors[i] == colors[i - 1]) {
            minTime += std::min(neededTime[i], neededTime[i - 1]);
            neededTime[i] = std::max(neededTime[i], neededTime[i - 1]);
        }
    }

    return minTime;
    }
};