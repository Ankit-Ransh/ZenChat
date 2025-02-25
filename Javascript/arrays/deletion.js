const arr = [1, 2, 3, 4, 5, 5, 5, 6, 6];

const top = arr.shift(); // first index
console.log(top, arr);

const last = arr.pop();
console.log(last, arr);

const remove4 = arr.splice(2, 1); // remove 4 knowing index
console.log(remove4, arr);


// find first occurence
const arr2 = [1, 2, 2, 2, 4, 2, 3];
const firstIndexOf2 = arr2.indexOf(2);
console.log(firstIndexOf2);

// find last occurence
const lastIndexOf2 = arr2.lastIndexOf(2);
console.log(lastIndexOf2);