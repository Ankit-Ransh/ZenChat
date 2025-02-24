greet();
function greet() {
    console.log("Hello, world!");
}

/* 
console.log(a);
const a = 5; // reference error
*/

baby();
function baby() {}

console.log(x); // undefined
var x = 5;

for (var i = 0; i < 3; i++) {
    setTimeout(function() {
        console.log(i); // 3, 3, 3
    }, 100);
}

for (let i = 0; i < 3; i++) {
    setTimeout(function() {
        console.log(i); 
    }, 100);
}

function outer() {
    console.log(a); // undefined
    var b = 5;
    var a = 10;
    function inner() {
        console.log(this.b); // 5
    }
    inner();
}
outer();
