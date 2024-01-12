class Solution {
public:
    bool halvesAreAlike(string s) {
        int mid = s.length() / 2;
        string firstHalf = s.substr(0, mid);
        string secondHalf = s.substr(mid);

        return countVowels(firstHalf) == countVowels(secondHalf);
    }

private:
    int countVowels(string str) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int count = 0;

        for (char c : str) {
            if (vowels.count(c) > 0) {
                count++;
            }
        }

        return count;
    }
};