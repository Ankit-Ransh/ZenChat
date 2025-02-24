/*
function main() {
    const name = "Ankit";
    function inner() {
        console.log(name);
    }

    // return inner;
    inner();
}

const fn = main(); // main function is invoked here and it does not return anything
console.log(fn); 
*/

function main1() {
    const name = "Priya";
    function inner() {
        console.log(name);
    }

    return inner;
}

// const fn1 = main1();
// fn1();

const fn2 = main1;
fn2();