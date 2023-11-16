class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n <= 1) {
            return 0;
        }
        int minPrice = prices[0];
        int maxProfit = 0;
        for (int i = 1; i < n; ++i) {
            minPrice = std::min(minPrice, prices[i]);
            maxProfit = std::max(maxProfit, prices[i] - minPrice);
        }
        return maxProfit;
    }
};