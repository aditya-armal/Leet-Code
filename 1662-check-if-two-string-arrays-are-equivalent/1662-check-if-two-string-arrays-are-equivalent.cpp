class Solution {
public:
    bool arrayStringsAreEqual(std::vector<std::string>& word1, std::vector<std::string>& word2) {
        std::string str1 = joinStrings(word1);
        std::string str2 = joinStrings(word2);

        return str1 == str2;
    }

private:
    std::string joinStrings(const std::vector<std::string>& words) {
        std::string result;
        for (const std::string& word : words) {
            result += word;
        }
        return result;
    }};