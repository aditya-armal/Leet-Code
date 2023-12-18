class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> result(n, 0);
        std::vector<std::pair<int, int>> indexedNums;

        for (int i = 0; i < n; i++) {
            indexedNums.push_back({nums[i], i});
        }

        std::sort(indexedNums.begin(), indexedNums.end());

        for (int i = 0; i < n; i++) {
            int count = 0;

            for (int j = 0; j < i; j++) {
                if (indexedNums[j].first < indexedNums[i].first) {
                    count++;
                }
            }

            result[indexedNums[i].second] = count;
        }

        return result;
    }
};