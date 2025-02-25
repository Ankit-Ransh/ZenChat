/*
    https://www.geeksforgeeks.org/check-if-an-array-can-be-divided-into-pairs-whose-sum-is-divisible-by-k/

    Given an array of integers and a number k, write a function that returns true if 
    the given array can be divided into pairs such that the sum of every pair is 
    divisible by k.

    Input: arr[] = [9, 7, 5, 3], k = 6 
    Output: True 
    We can divide the array into (9, 3) and (7, 5). Sum of both of these pairs is a multiple of 6.


    Input: arr[] = [92, 75, 65, 48, 45, 35], k = 10 
    Output: True 
    We can divide the array into (92, 48), (75, 65) and (45, 35). The sum of all these pairs are multiples of 10.


    Input: arr[] = [91, 74, 66, 48], k = 10 
    Output: False 
*/

const canPair = (arr, k) => {
    if (arr.length & 1) return false;

    const modArray = arr.map((ele) => {
        return ele % k;
    });

    const map = new Map();
    for (let item of modArray) {
        const freq = Number(map.get(item)) || 0;
        map.set(item, freq + 1);
    }

    for (let item of map) {
        const key = item[0], value = item[1];
        if (value & 1) return false;

        if (!key) continue;
        if (value != (map.get(k - key))) return false;
    }

    return true;
}

const arr = [9, 5, 7, 3];
const k = 6;

console.log(canPair(arr, k));