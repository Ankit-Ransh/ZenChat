/* 
    https://www.geeksforgeeks.org/count-distinct-elements-in-every-window-of-size-k/

    Given an array arr[] of size n and an integer k, return the count of distinct numbers in all windows of size k. 

    Examples: 

    Input: arr[] = [1, 2, 1, 3, 4, 2, 3], k = 4
    Output: [3, 4, 4, 3]
    Explanation: First window is [1, 2, 1, 3], count of distinct numbers is 3.
        Second window is [2, 1, 3, 4] count of distinct numbers is 4.
        Third window is [1, 3, 4, 2] count of distinct numbers is 4.
        Fourth window is [3, 4, 2, 3] count of distinct numbers is 3.


    Input: arr[] = [4, 1, 1], k = 2
    Output: [2, 1]
    Explanation: First window is [4, 1], count of distinct numbers is 2.
        Second window is [1, 1], count of distinct numbers is 1.
*/

const arr = [8, 10, 6];
const k = 1;

const distinctEle = [];
const n = arr.length;

const map = new Map();
for (let i = 0; i < k - 1; ++i) {
    const freq = Number(map.get(arr[i])) || 0;
    map.set(arr[i], freq + 1);
}

let prev = 0;
for (let i = k - 1; i < n; ++i) {
    const freq = Number(map.get(arr[i])) || 0;
    map.set(arr[i], freq + 1);

    console.log(map, map.size);

    const currDistinct = map.size;
    distinctEle.push(currDistinct);

    const first = Number(map.get(arr[prev])) || 0;
    if (first == 1) map.delete(arr[prev]);
    else map.set(arr[prev], first - 1);

    prev = prev + 1;
}

return distinctEle;