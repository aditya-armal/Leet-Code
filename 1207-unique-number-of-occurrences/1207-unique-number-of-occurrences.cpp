class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        std::unordered_map<int, int> countMap;
        std::unordered_set<int> uniqueCounts;

        for (int num : arr) {
            countMap[num]++;
        }

        for (const auto& entry : countMap) {
            int count = entry.second;
            if (uniqueCounts.find(count) != uniqueCounts.end()) {
                return false;
            }
            uniqueCounts.insert(count);
        }

        return true;
    }
};