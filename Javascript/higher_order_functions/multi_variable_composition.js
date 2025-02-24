function add(x, y) {
    return x + y;
}

function mul(x, y) {
    return x * y;
}

function compose(f, g) {
    return function (x, y) {
        return f(g(x, y), x);
    }
}

const doubleComposedF = compose(add, mul) (3, 4);
console.log(doubleComposedF);