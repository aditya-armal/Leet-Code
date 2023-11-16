class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int count = 1;
        for (int i = 1; i < nums.size(); ++i) {
            if (count == 0) {
                candidate = nums[i];
                count = 1;
            } else if (nums[i] == candidate) {
                ++count;
            } else {
                --count;
            }
        }

        count = 0;
        for (int num : nums) {
            if (num == candidate) {
                ++count;
            }
        }
        return (count > nums.size() / 2) ? candidate : -1;
    }
};