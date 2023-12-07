class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();

        std::vector<int> leftPrefixSum(n, 0);
        std::vector<int> rightPrefixSum(n, 0);

        leftPrefixSum[0] = nums[0];
        rightPrefixSum[n - 1] = nums[n - 1];

        for (int i = 1; i < n; ++i) {
            leftPrefixSum[i] = leftPrefixSum[i - 1] + nums[i];
            rightPrefixSum[n - i - 1] = rightPrefixSum[n - i] + nums[n - i - 1];
        }

        std::vector<int> result(n);

        for (int i = 0; i < n; ++i) {
            int leftSum = i > 0 ? leftPrefixSum[i - 1] : 0;
            int rightSum = i < n - 1 ? rightPrefixSum[i + 1] : 0;

            result[i] = std::abs(leftSum - rightSum);
        }

        return result;
    }
};