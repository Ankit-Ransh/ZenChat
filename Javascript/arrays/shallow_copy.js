const arr1 = [1, 2, 3, 4, 5];
const arr2 = arr1; // this creates a shallow copy

arr2[0] = 5; /* shallow copy points to the same reference as the original, 
    If we change one other will be affected */
console.log(arr1, arr2);