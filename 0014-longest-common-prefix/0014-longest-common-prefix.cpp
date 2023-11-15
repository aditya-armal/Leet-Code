class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return ""; 
        for (int i = 0; i < strs[0].length(); ++i) {
            char currentChar = strs[0][i];

            // Check if the current character matches in all other strings
            for (int j = 1; j < strs.size(); ++j) {
                if (i >= strs[j].length() || strs[j][i] != currentChar) {
                    return strs[0].substr(0, i);
                }
            }
        }

        return strs[0];
    }
};