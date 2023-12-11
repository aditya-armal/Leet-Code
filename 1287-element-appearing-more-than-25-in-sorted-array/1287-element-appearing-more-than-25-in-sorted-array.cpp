class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
    int targetFrequency = n / 4 + 1; 

    for (int i = 0; i < n - targetFrequency + 1; ++i) {
        if (arr[i] == arr[i + targetFrequency - 1]) {
            return arr[i];
        }
    }

    return -1;
    }
};