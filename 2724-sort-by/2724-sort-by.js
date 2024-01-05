/**
 * @param {Array} arr
 * @param {Function} fn
 * @return {Array}
 */
var sortBy = function(arr, fn) {
     if (!Array.isArray(arr) || typeof fn !== 'function') {
    throw new Error('Invalid input');
  }

  return arr.slice().sort((a, b) => {
    const keyA = fn(a);
    const keyB = fn(b);

    if (keyA < keyB) {
      return -1;
    } else if (keyA > keyB) {
      return 1;
    } else {
      return 0;
    }
  });
};