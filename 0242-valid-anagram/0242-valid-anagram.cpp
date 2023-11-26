class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        std::unordered_map<char, int> charFrequency;

        for (char c : s) {
            charFrequency[c]++;
        }

        for (char c : t) {
            charFrequency[c]--;
        }

        for (const auto& pair : charFrequency) {
            if (pair.second != 0) {
                return false;
            }
        }

        return true;
    }
};