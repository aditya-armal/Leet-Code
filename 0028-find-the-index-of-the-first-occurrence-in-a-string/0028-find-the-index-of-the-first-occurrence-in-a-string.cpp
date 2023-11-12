class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t pos = haystack.find(needle);
        if (pos != std::string::npos) {
            return static_cast<int>(pos);
        } else {
            return -1; // Not found
        }
    }
};