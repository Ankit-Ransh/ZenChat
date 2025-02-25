/* 
    https://www.geeksforgeeks.org/count-pairs-with-given-sum/

    Given an array arr[] of n integers and a target value, the task is to 
    find the number of pairs of integers in the array whose sum is equal to target.

    Input: arr[] = {1, 5, 7, -1, 5}, target = 6
    Output:  3
    Explanation: Pairs with sum 6 are (1, 5), (7, -1) & (1, 5).         


    Input: arr[] = {1, 1, 1, 1}, target = 2
    Output:  6
    Explanation: Pairs with sum 2 are (1, 1), (1, 1), (1, 1), (1, 1), (1, 1) and (1, 1).


    Input: arr[] = {10, 12, 10, 15, -1}, target = 125
    Output:  0
*/

const arr = [1, 5, 7, -1, 5];
const target = 6;

const map = new Map();
let pairs = 0;

for (let item of arr) {
    const req = target - item;
    if (map.has(req)) {
        pairs += map.get(req);
    }

    const freq = Number(map.get(item)) || 0;
    map.set(item, freq + 1);
}

console.log(pairs);