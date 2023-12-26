class Solution {
public:
    int firstUniqChar(string s) {
         std::unordered_map<char, int> charCount;

        for (char ch : s) {
            charCount[ch]++;
        }

        for (int i = 0; i < s.length(); ++i) {
            if (charCount[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};