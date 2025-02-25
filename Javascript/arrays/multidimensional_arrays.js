const arr1 = [[1], [2], [3], [4]];
const arr2 = [...arr1];

console.log("Original --> ", arr1);
console.log("Cloned --> ", arr2);

arr1.push([5, 6, 7]); // arr1 outer will not affect arr2
console.log("Original --> ", arr1);
console.log("Cloned --> ", arr2);


arr2.push([8, 9, 10]); // arr2 outer will not affect arr1
console.log("Original --> ", arr1);
console.log("Cloned --> ", arr2);

/* * But the inner arrays will affect arr2 as it has only one level down deep copy * */
arr1[0].unshift(0);

console.log("Original --> ", arr1);
console.log("Cloned --> ", arr2); // Affected