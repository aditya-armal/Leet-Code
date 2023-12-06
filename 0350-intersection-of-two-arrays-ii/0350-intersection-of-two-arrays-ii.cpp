class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
          std::unordered_map<int, int> countMap;
        std::vector<int> result;

        for (int num : nums1) {
            countMap[num]++;
        }

        for (int num : nums2) {
            if (countMap.count(num) && countMap[num] > 0) {
                result.push_back(num);
                countMap[num]--;
            }
        }

        return result;
    }
};