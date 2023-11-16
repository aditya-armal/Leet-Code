class Solution {
public:
    string convertToTitle(int columnNumber) {
        std::string result = "";
        while (columnNumber > 0) {
            --columnNumber;
            int remainder = columnNumber % 26;
            result = static_cast<char>('A' + remainder) + result;
            columnNumber /= 26;
        }
        return result;
    }
};