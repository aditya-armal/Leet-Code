class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return mid; // Target found at index mid
            } else if (nums[mid] < target) {
                low = mid + 1; // Target is in the right half
            } else {
                high = mid; // Target is in the left half
            }
        }
        return low;
    }
};