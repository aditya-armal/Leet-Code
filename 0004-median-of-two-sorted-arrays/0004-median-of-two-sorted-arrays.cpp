class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        int totalSize = nums1.size() + nums2.size();
        if (totalSize % 2 == 1) {
            return findKthElement(nums1, nums2, totalSize / 2 + 1);
        } else {
            return (findKthElement(nums1, nums2, totalSize / 2) +
                    findKthElement(nums1, nums2, totalSize / 2 + 1)) / 2.0;
        }
    }

private:
    int findKthElement(const std::vector<int>& nums1, const std::vector<int>& nums2, int k) {
        int m = nums1.size();
        int n = nums2.size();
        int index1 = 0, index2 = 0;

        while (true) {
            if (index1 == m) {
                return nums2[index2 + k - 1];
            }
            if (index2 == n) {
                return nums1[index1 + k - 1];
            }
            if (k == 1) {
                return std::min(nums1[index1], nums2[index2]);
            }

            int halfK = k / 2;
            int newIndex1 = std::min(index1 + halfK, m) - 1;
            int newIndex2 = std::min(index2 + halfK, n) - 1;

            if (nums1[newIndex1] <= nums2[newIndex2]) {
                k -= (newIndex1 - index1 + 1);
                index1 = newIndex1 + 1;
            } else {
                k -= (newIndex2 - index2 + 1);
                index2 = newIndex2 + 1;
            }
        }
    }
};