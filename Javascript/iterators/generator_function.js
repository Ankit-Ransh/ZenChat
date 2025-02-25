function* example() {
    console.log(1);
    yield 1;

    console.log(2);
    yield 2;

    console.log(3);
    yield 3;
}

const ex = example();
console.log(ex);
console.log(ex.next());
console.log(ex.next());
console.log(ex.next());
console.log(ex.next());