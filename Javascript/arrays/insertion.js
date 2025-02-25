const arr = [1, 2, 3, 4, 5];
arr.unshift(0); // insert at beginining
console.log(arr);

arr.push(6); // insert at end
console.log(arr);

const arr2 = [1,3,4,5];
arr2.splice(1,0,2); // insert at index 1 -> delete count 0, number = 2
console.log(arr2);

const arr3 = [1,4,5];
arr3.splice(1,0,2,3);
console.log(arr3);