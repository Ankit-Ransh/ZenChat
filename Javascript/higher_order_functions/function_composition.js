function add(x) {
    return x + 2;
}

function mul(x) {
    return x * 3;
}

function compose(f, g) {
    return function (x) {
        return f(g(x));
    }
}

const composedF = compose(add, mul) (4);
console.log(composedF);