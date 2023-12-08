/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {

    if (!Array.isArray(arr) || typeof fn !== 'function') {
        throw new TypeError('Invalid arguments');
    }

    const filteredArr = [];

    for (let i = 0; i < arr.length; i++) {
        const element = arr[i];

        const isTruthy = fn(element, i);

        if (isTruthy) {
            filteredArr.push(element);
        }
    }

    return filteredArr;
};