class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, pair<int, int>> charIndices;

        int maxLength = -1;

        for (int i = 0; i < s.length(); ++i) {
            if (charIndices.find(s[i]) == charIndices.end()) {
                charIndices[s[i]] = {i, i};
            } else {
                maxLength = max(maxLength, i - charIndices[s[i]].first - 1);
            }
        }

        return maxLength;    
    }
};