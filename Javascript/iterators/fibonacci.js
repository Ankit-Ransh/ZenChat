function* fibonacci(limit) {
    let [prev, current] = [0, 1];
    while (limit--) {
        yield current;
        [prev, current] = [current, prev + current];
    }
}
const fib = fibonacci(5);
console.log([...fib]); // making a shallow copy