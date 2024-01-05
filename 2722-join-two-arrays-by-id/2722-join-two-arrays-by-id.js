/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function(arr1, arr2) {
 const idMap = new Map();

  arr1.forEach((obj) => idMap.set(obj.id, obj));

  arr2.forEach((obj) => {
    const existingObj = idMap.get(obj.id);

    if (existingObj) {
      idMap.set(obj.id, { ...existingObj, ...obj });
    } else {
      idMap.set(obj.id, obj);
    }
  });

  const joinedArray = Array.from(idMap.values()).sort((a, b) => a.id - b.id);

  return joinedArray;
};