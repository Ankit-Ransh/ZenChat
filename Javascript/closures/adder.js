function adder(num) {
    function secArg(b) {
        console.log(num + b);
    }
    return secArg;
}

const addTo5 = adder(5);
const addTo10 = adder(10);

addTo5(4);
addTo10(4);