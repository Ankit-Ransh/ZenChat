/* 
    https://www.geeksforgeeks.org/check-if-two-arrays-are-equal-or-not/

    Given two arrays, a and b of equal length. The task is to determine if the given arrays are equal or not. Two arrays are considered equal 
    if:
        Both arrays contain the same set of elements.
        The arrangements (or permutations) of elements may be different.
        If there are repeated elements, the counts of each element must be the same in both arrays.

    Input: a[] = [1, 2, 5, 4, 0], b[] = [2, 4, 5, 0, 1]
    Output: true


    Input: a[] = [1, 2, 5, 4, 0, 2, 1], b[] = [2, 4, 5, 0, 1, 1, 2] 
    Output: true


    Input: a[] = [1, 7, 1], b[] = [7, 7, 1]
    Output: false
*/

const insertInMap = (arr, map) => {
    for (let x of arr) {
        const freq = Number(map.get(x)) || 0;
        map.set(x, freq + 1);
    }

    return map;
};

const compareMaps = (a, b) => {
    if (a.size != b.size) return false;

    const it = a[Symbol.iterator](); // iterator of map
    for (let item of a) {
        // item[0] -> key, item[1] -> value
        if (!(b.has(item[0]) &&
            b.get(item[0]) == item[1])) return false;
    }

    return true;
};

const checkEqual = (a, b) => {
    let mapA = new Map();
    let mapB = new Map();

    mapA = insertInMap(a, mapA);
    mapB = insertInMap(b, mapB);

    return compareMaps(mapA, mapB);
};

const a = [1, 2, 5, 4, 0];
const b = [2, 4, 5, 0, 1];

const isEqual = checkEqual(a, b);
console.log(isEqual);
