console.log("start");

setTimeout(() => {
    console.log("Set timeout");
},0); // processed in callback queue

Promise.resolve().then(() => {
    console.log("Promise resolved");
}); // processed in microtask queue

console.log("end");

/* 
    Priority --> normal -> microtask -> callback
*/