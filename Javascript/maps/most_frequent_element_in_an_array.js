/* 
    https://www.geeksforgeeks.org/frequent-element-array/

    Input : arr[] = {1, 3, 2, 1, 4, 1}
    Output : 1
    Explanation: 1 appears three times in array which is maximum frequency.


    Input : arr[] = {10, 20, 10, 20, 30, 20, 20}
    Output : 20 appears four  times in array which is maximum frequency
*/

const arr = [1, 3, 2, 1, 4, 1];
const map = new Map();

let element = 0, count = 0;
for (let ele of arr) {
    const freq = Number(map.get(ele)) || 0;
    map.set(ele, freq + 1);

    if (count <= map.get(ele)) {
        count = map.get(ele);
        element = ele;
    }
}

console.log(element);

