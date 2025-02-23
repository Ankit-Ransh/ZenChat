const x = '5' + 5; // '55'
const y = '5' + true; // '5true'
const z = '5' - 2; // '3'

const a = true + 5; // 6
const b = true - 2; // -1
const c = '5' & 1; // 1 

let d;
if(d) { console.log("True"); }
else { console.log("False"); }

console.log(x, typeof(x));
console.log(y, typeof(y));
console.log(z, typeof(z));
console.log(a, typeof(a));
console.log(b, typeof(b));
console.log(c, typeof(c));