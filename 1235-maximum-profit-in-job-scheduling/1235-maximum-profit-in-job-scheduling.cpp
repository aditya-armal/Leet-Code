class Solution {
public:
    int binarySearch(const vector<vector<int>>& jobs, int index) {
    int low = 0, high = index - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (jobs[mid][1] <= jobs[index][0]) {
            if (jobs[mid + 1][1] <= jobs[index][0]) {
                low = mid + 1;
            } else {
                return mid;
            }
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
    vector<vector<int>> jobs;

    for (int i = 0; i < startTime.size(); ++i) {
        jobs.push_back({startTime[i], endTime[i], profit[i]});
    }

    sort(jobs.begin(), jobs.end(), [](const auto& a, const auto& b) {
        return a[1] < b[1];
    });

    int n = jobs.size();
    vector<int> dp(n, 0);
    dp[0] = jobs[0][2];

    for (int i = 1; i < n; ++i) {
        int latestNonOverlappingJob = binarySearch(jobs, i);
        int profitIncludingCurrentJob = jobs[i][2] + (latestNonOverlappingJob != -1 ? dp[latestNonOverlappingJob] : 0);
        int profitExcludingCurrentJob = dp[i - 1];

        dp[i] = max(profitIncludingCurrentJob, profitExcludingCurrentJob);
    }

    return dp[n - 1];
}
};