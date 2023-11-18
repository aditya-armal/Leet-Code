class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        int left = 0, right = 0;
        std::unordered_set<char> charSet;

        while (right < n) {
            if (charSet.find(s[right]) == charSet.end()) {
                // Character is not in the set, expand the window
                charSet.insert(s[right]);
                maxLength = std::max(maxLength, right - left + 1);
                ++right;
            } else {
                // Character is in the set, shrink the window
                charSet.erase(s[left]);
                ++left;
            }
        }

        return maxLength;
    }
};