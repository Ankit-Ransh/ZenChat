console.log(`Sum (3, 4) => ${sum(3, 4)}`);
console.log(`Sum (4, 3) => ${sub(4, 3)}`);

function sum(a, b) {
    return a + b;
} // hoisted means --> move to top of the scope

var sub = (a, b) => {
    return a - b;
}; // not hoisted


