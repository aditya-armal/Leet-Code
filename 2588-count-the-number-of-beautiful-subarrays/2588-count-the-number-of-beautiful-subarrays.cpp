class Solution {
 public:
  long long beautifulSubarrays(vector<int>& nums) {
    long long ans = 0;
    int prefix = 0;
    unordered_map<int, int> prefixCount{{0, 1}};

    for (const int num : nums) {
      prefix ^= num;
      ans += prefixCount[prefix]++;
    }

    return ans;
  }
};