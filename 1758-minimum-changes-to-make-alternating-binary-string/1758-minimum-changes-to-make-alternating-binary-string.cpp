class Solution {
public:
    int minOperations(string s) {
        int count01 = 0;  
        int count10 = 0;  

        for (int i = 0; i < s.length(); i++) {
            // Case 1: Starting with '0'
            if (i % 2 == 0) {
                if (s[i] != '0') {
                    count01++;
                }
                if (s[i] != '1') {
                    count10++;
                }
            }
            // Case 2: Starting with '1'
            else {
                if (s[i] != '1') {
                    count01++;
                }
                if (s[i] != '0') {
                    count10++;
                }
            }
        }

        return min(count01, count10);
    }
};