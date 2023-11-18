class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        std::unordered_map<char, char> sToT;
        std::unordered_map<char, char> tToS;

        for (int i = 0; i < s.length(); ++i) {
            char charS = s[i];
            char charT = t[i];

            if (sToT.find(charS) != sToT.end() && sToT[charS] != charT) {
                return false;
            }
            sToT[charS] = charT;

            if (tToS.find(charT) != tToS.end() && tToS[charT] != charS) {
                return false;
            }
            tToS[charT] = charS;
        }

        return true;
    }
};