/*
    Spread operators go one level deep for copying the elements but it is not 
    great for multi dimensional arrays
*/

const arr1 = [1, 2, 3, 4, 5];
const arr2 = [...arr1]; 

arr2.push({
    name: "Ankit",
    status: "Single"
});

console.log("Original --> ", arr1);
console.log("Cloned --> ", arr2);

arr1.push(6);
console.log("Original --> ", arr1);
console.log("Cloned --> ", arr2);

arr1.push({
    name: "Shreya",
    status: "Single"
});

console.log("Original --> ", arr1);
console.log("Cloned --> ", arr2);