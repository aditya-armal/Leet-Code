class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        int totalSubsequences = 0;
        vector<unordered_map<long long, int>> dp(n);  
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                long long diff = static_cast<long long>(nums[i]) - static_cast<long long>(nums[j]);
                dp[i][diff] += 1;  

                if (dp[j].find(diff) != dp[j].end()) {
                    dp[i][diff] += dp[j][diff];
                    totalSubsequences += dp[j][diff];                }
            }
        }

        return totalSubsequences;
    }
};