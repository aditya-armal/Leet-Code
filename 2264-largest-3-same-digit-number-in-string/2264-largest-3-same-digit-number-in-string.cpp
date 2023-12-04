class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        std::string maxGoodInteger = "";

        for (int i = 0; i < n - 2; ++i) {
            if (num[i] == num[i + 1] && num[i + 1] == num[i + 2]) {
                std::string currentGoodInteger(3, num[i]);

                if (currentGoodInteger > maxGoodInteger) {
                    maxGoodInteger = currentGoodInteger;
                }
            }
        }

        return maxGoodInteger;
    }
};