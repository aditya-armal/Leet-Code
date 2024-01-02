class Solution(object):
    def findMatrix(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        result = []

        # Sort the array in descending order to maximize the chances of creating rows with distinct elements
        sorted_nums = sorted(nums, reverse=True)

        for num in sorted_nums:
            # Check if num is already present in any existing row
            found = False
            for row in result:
                if num not in row:
                    row.append(num)
                    found = True
                    break

            # If num is not present in any row, create a new row with num
            if not found:
                result.append([num])

        return result