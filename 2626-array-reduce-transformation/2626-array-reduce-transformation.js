/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
     if (nums.length === 0 && init === undefined) {
        throw new TypeError('Reduce of empty array with no initial value');
    }

    let accumulator = init !== undefined ? init : nums[0];
    let startIndex = init !== undefined ? 0 : 1;

    for (let i = startIndex; i < nums.length; i++) {
        accumulator = fn(accumulator, nums[i], i, nums);
    }

    return accumulator;
};