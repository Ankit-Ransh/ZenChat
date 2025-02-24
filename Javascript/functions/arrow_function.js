const multiply = (x, y) => {
    x += y;
    return x * y;
};

console.log(multiply(4, 5));

setTimeout(() => {
    console.log("Delay of 2 seconds");
}, 2000);