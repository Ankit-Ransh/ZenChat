const a = [];
console.log(a);

const b = [1, 2, 3];
console.log(b);

const size = 6;
const arrWithNew = new Array(size);
console.log(arrWithNew);

const arrWithValNew = new Array(1, 2, 3, 4, 4);
console.log(arrWithValNew);

console.log(b.length); // no method invoked here

b.push(5); // add 5 to end
console.log(b);

b.unshift(0) // add 0 to start
console.log(b);

arrWithValNew.pop(); // remove last element
arrWithNew.shift(); // remove first element

const concat = arrWithNew.concat(b);
console.log(concat);

console.log(typeof concat); // Array

if(Array.isArray(concat)) {
    console.log("Concat is an array");
}

if(concat instanceof Array) {
    console.log("Instance of an array");
}