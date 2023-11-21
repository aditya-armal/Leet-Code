/**
 * @param {number[]} nums
 * @return {string[]}
 */
var summaryRanges = function(nums) {
    if (nums.length === 0) {
        return [];
    }

    const result = [];
    let start = nums[0];
    let end = nums[0];

    for (let i = 1; i < nums.length; i++) {
        if (nums[i] === end + 1) {
            end = nums[i];
        } else {
            result.push(formatRange(start, end));
            start = nums[i];
            end = nums[i];
        }
    }

    result.push(formatRange(start, end));

    return result;
};

function formatRange(start, end) {
    return start === end ? `${start}` : `${start}->${end}`;
}