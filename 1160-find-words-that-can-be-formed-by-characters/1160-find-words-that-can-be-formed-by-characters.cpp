class Solution {
public:
    int countCharacters(std::vector<std::string>& words, std::string chars) {
        std::unordered_map<char, int> charCount;

        for (char c : chars) {
            charCount[c]++;
        }

        int result = 0;

        for (const std::string& word : words) {
            if (canFormWord(word, charCount)) {
                result += word.size();
            }
        }

        return result;
    }

private:
    bool canFormWord(const std::string& word, std::unordered_map<char, int>& charCount) {
        std::unordered_map<char, int> wordCount;

        for (char c : word) {
            wordCount[c]++;
        }

        for (const auto& entry : wordCount) {
            if (charCount[entry.first] < entry.second) {
                return false;
            }
        }

        return true;
    }};