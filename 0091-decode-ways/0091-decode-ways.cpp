class Solution {
public:
    int numDecodings(string s) {
        int n = s.length();
        if (n == 0) {
            return 0;
        }

        vector<int> dp(n + 1, 0);
        dp[0] = 1;

        for (int i = 1; i <= n; i++) {
            if (s[i - 1] != '0') {
                dp[i] += dp[i - 1];
            }

            if (i >= 2 && isValidTwoDigit(s[i - 2], s[i - 1])) {
                dp[i] += dp[i - 2];
            }
        }

        return dp[n];
    }
private:
        bool isValidTwoDigit(char ch1, char ch2) {
        int num = (ch1 - '0') * 10 + (ch2 - '0');
        return num >= 10 && num <= 26;
    }
};