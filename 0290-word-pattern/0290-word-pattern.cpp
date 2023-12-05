class Solution {
public:
    bool wordPattern(string pattern, string s) {
        std::unordered_map<char, std::string> charToWord;
        std::unordered_map<std::string, char> wordToChar;

        std::istringstream iss(s);
        std::vector<std::string> words;

        std::string word;
        while (iss >> word) {
            words.push_back(word);
        }

        if (pattern.size() != words.size()) {
            return false;
        }

        for (int i = 0; i < pattern.size(); ++i) {
            char c = pattern[i];
            std::string word = words[i];

            if (charToWord.count(c) && charToWord[c] != word) {
                return false;
            }

            if (wordToChar.count(word) && wordToChar[word] != c) {
                return false;
            }

            charToWord[c] = word;
            wordToChar[word] = c;
        }

        return true;
    }
};