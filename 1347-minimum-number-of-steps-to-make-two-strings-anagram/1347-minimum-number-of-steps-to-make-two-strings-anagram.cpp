class Solution {
public:
    int minSteps(string s, string t) {
        if (s.length() != t.length()) {
            return -1;
        }

        vector<int> freqS(26, 0);
        vector<int> freqT(26, 0);

        for (char c : s) {
            freqS[c - 'a'] += 1;
        }

        for (char c : t) {
            freqT[c - 'a'] += 1;
        }

        int steps = 0;
        for (int i = 0; i < 26; ++i) {
            steps += abs(freqS[i] - freqT[i]);
        }

        return steps / 2;
    }
};