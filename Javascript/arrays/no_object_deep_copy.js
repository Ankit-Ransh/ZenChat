// Using spread operator
const arr1 = [1, 2, 3, 4, 5];
const arr2 = [...arr1];

console.log(arr1, arr2);

arr2[0] = 5;
console.log(arr1, arr2);


// Using object.assign --> does not work good in nested objects
const arr3 = Object.assign([], arr1);
arr3[0] = 2;
console.log(arr1, arr3);


// works nice in nested objects as well
let obj1 = { 
    id: 1, 
    company: "Ankit", 
    details: { 
        employee_no: 10 
    } 
}; 
let obj2 = JSON.parse(JSON.stringify(obj1)) 
