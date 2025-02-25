/* 
    https://www.geeksforgeeks.org/count-pairs-difference-equal-k/

    Given an array arr[] and a positive integer k, the task is to count all pairs (i, j)
    such that i < j and absolute value of (arr[i] – arr[j]) is equal to k. 

    Input: arr[] = [1, 4, 1, 4, 5], k = 3
    Output: 4
    Explanation: There are 4 pairs with absolute difference 3, the pairs are [1, 4], [1, 4], [1, 4] and [4, 1]

    Input: arr[] = [8, 16, 12, 16, 4, 0], k = 4
    Output: 5
    Explanation: There are 5 pairs with absolute difference 4, the pairs are [8, 12], [8, 4], [16, 12], [12, 16], [4, 0].
*/

const arr = [8, 16, 12, 16, 4, 0];
const k = 4;

const map = new Map();
let pairs = 0;

for (let item of arr) {
    const freq = Number(map.get(item)) || 0;
    map.set(item, freq + 1);
}

for (let item of arr) {
    if (map.has(item + k)) {
        pairs += (Number(map.get(item + k)) || 0);
    }
}

console.log(pairs);