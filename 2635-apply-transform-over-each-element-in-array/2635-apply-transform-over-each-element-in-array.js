/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    if (!Array.isArray(arr) || typeof fn !== 'function') {
        throw new TypeError('Invalid arguments');
    }

    const mappedArray = [];

    for (let i = 0; i < arr.length; i++) {
        const element = arr[i];

        const transformedValue = fn(element, i);

        mappedArray.push(transformedValue);
    }

    return mappedArray;
};