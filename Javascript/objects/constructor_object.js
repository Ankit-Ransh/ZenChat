const obj = new Array(1, 2, 3, 4, 5);
console.log("Type -->", typeof obj);
console.log(obj);

const str = new String('Hi I am Ankit');
console.log("Type -->", typeof str);
console.log(str);

const str2 = 'Hi I am Ankit';
console.log("Type --> ", typeof str2);
console.log(str2);


console.log(str == str2); // check values -> true
console.log(str === str2); // check values and type --> false